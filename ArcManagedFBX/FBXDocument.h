#pragma once

#include "FBXObject.h"
#include "FBXCollection.h"

namespace ArcManagedFBX
{
	// The fbx document that we are working with
	public ref class FBXDocument : public FBXCollection
	{
	public:
		FBXDocument();
		virtual ~FBXDocument();
		!FBXDocument();
		virtual void Clear();

		ARC_PROPERTY_PUBLICGET(int32,RootMemberCount)
		ARC_PROPERTY_PUBLICGET(FBXObject^,RootMember)
	internal:
		FBXDocument(FbxDocument* instance);
	protected:

	private:
		ARC_CHILD_CAST(NativeObject,FbxDocument,FBXDocument)
	};
}
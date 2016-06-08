// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4VRML1.cc,v 2.4 1998/11/09 19:33:17 allison Exp $
// GEANT4 tag $Name: geant4-00 $
//
// G4VRML1.cc
// Yasuhide Sawada & Satoshi Tanaka

//=================//
#ifdef G4VIS_BUILD_VRML_DRIVER
//=================//


#include <stdio.h> // sscanf
#include <stdlib.h> // getenv

#include "G4VScene.hh"

#include "G4VRML1.hh"
#include "G4VRML1Scene.hh"
#include "G4VRML1View.hh"

#include "G4FRClient.hh"


G4VRML1::G4VRML1() :
	G4VGraphicsSystem("VRML1", "VRML1", G4VGraphicsSystem::threeD)
{
	// port number
	fPort = FR_VRML_DEFAULT_PORT;
	char *pport = getenv(FR_VRML_PORT_ENV);
	if (pport) {
		sscanf(pport, "%d", &fPort);
	}

	// host name
	fHostName = "localhost" ; // G4String::operator = ( const char* cs )
	char *phostname =  getenv(FR_VRML_HOST_NAME_ENV); 
	if (phostname) {
		fHostName = phostname;
	}
}

G4VRML1::~G4VRML1()
{
}


G4VScene* G4VRML1::CreateScene(const G4String& name) 
{
	G4VScene *p = NULL;

	p = new G4VRML1Scene(*this, name);

	G4cout << G4VRML1Scene::GetSceneCount()
		<< " " << fName << " scenes extanct." << endl;

	return p;
}

G4VView* G4VRML1::CreateView(G4VScene& scene, const G4String& name)
{
	G4VView* pView = NULL;

	G4VRML1Scene* pScene = (G4VRML1Scene*)&scene;
	pView = new G4VRML1View(*pScene, name);

	return pView;
}

#endif
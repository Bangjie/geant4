// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4OpenInventorX.cc,v 2.6 1998/12/08 09:51:40 barrand Exp $
// GEANT4 tag $Name: geant4-00 $
//
// 
// Jeff Kallenbach 01 Aug 1996
// OpenInventor graphics system factory.

#ifdef G4VIS_BUILD_OIX_DRIVER

#include <Inventor/Xt/SoXt.h>

#include "G4OpenInventorX.hh"
#include "G4OpenInventorScene.hh"
#include "G4OpenInventorView.hh"

#include "G4Xt.hh"

G4OpenInventorX::G4OpenInventorX ()
:G4OpenInventor("OpenInventorX","OIX",G4VGraphicsSystem::threeD)
{
  SetInteractorManager (G4Xt::getInstance ());
  GetInteractorManager () -> 
    RemoveDispatcher((G4DispatchFunction)XtDispatchEvent);  
  GetInteractorManager () -> 
    AddDispatcher   ((G4DispatchFunction)SoXt::dispatchEvent);

  Widget toplevel = (Widget)GetInteractorManager()->GetMainInteractor();

  SoXt::init (toplevel);

  InitHEPVis();
}

#endif
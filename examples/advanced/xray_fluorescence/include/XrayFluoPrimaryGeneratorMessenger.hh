//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: XrayFluoPrimaryGeneratorMessenger.hh
// GEANT4 tag $Name:  xray_fluo-V03-02-00
//
// Author: Elena Guardincerri (Elena.Guardincerri@ge.infn.it)
//
// History:
// -----------
//  28 Nov 2001  Elena Guardincerri   Created
//
// -------------------------------------------------------------------


#ifndef XrayFluoPrimaryGeneratorMessenger_h
#define XrayFluoPrimaryGeneratorMessenger_h 1

#include "G4UImessenger.hh"
#include "globals.hh"

class XrayFluoPrimaryGeneratorAction;
class G4UIcmdWithAString;
class G4UIcmdWithABool;
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

class XrayFluoPrimaryGeneratorMessenger: public G4UImessenger
{
  public:
  XrayFluoPrimaryGeneratorMessenger(XrayFluoPrimaryGeneratorAction*);
  ~XrayFluoPrimaryGeneratorMessenger();
  
  void SetNewValue(G4UIcommand*, G4String);
  
private:

  XrayFluoPrimaryGeneratorAction* XrayFluoAction; 

  //command to set a random impact point
  G4UIcmdWithAString*          RndmCmd;

  //command to choose a plane circular source
  G4UIcmdWithAString*          RndmVert;
 
  //command to shot particles according to certain spectra
  G4UIcmdWithAString*          spectrum;

  //command to shot particles from an isotropic source
  G4UIcmdWithAString*          isoVert;

  //command to shot particles created during previous runs
  G4UIcmdWithAString*          loadPahseSpace;

  //command to set the flag to load Data abaout particle coming from Rayleigh scattering
  G4UIcmdWithABool*            loadRayleighData;

};



#endif

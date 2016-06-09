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
// $Id: XrayFluoSensorHit.cc
// GEANT4 tag $Name: xray_fluo-V04-01-03
//
// Author: Elena Guardincerri (Elena.Guardincerri@ge.infn.it)
//
// History:
// -----------
// 28 Nov 2001 Elena Guardincerri     Created
// 29 Nov 2002 Alfonso Mantero minor modifications (Alfonso.mantero@ge.infn.it)
// -------------------------------------------------------------------

#include "XrayFluoSensorHit.hh"

G4Allocator<XrayFluoSensorHit> XrayFluoSensorHitAllocator;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

XrayFluoSensorHit::XrayFluoSensorHit()
{
  EdepTot = 0.;  
  EdepDetect = 0.;

 
  //  G4cout << "XrayFluoSensorHit created" << G4endl;   
 }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

XrayFluoSensorHit::XrayFluoSensorHit(const XrayFluoSensorHit& right):
  G4VHit(right)
{
  EdepTot = right.EdepTot ; 

  EdepDetect = right.EdepDetect;

  //G4cout << "XrayFluoSensorHit created" << G4endl;  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

XrayFluoSensorHit::~XrayFluoSensorHit()
{
  //G4cout << "XrayFluo SensorHit deleted" << G4endl; 
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

const XrayFluoSensorHit& XrayFluoSensorHit::operator=(const XrayFluoSensorHit& right)
{
  EdepTot = right.EdepTot ; 
  EdepDetect = right.EdepDetect;
 
  return *this;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

int XrayFluoSensorHit::operator==(const XrayFluoSensorHit&) const
{
  return 0;
}


void XrayFluoSensorHit::Draw()
{;}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void XrayFluoSensorHit::Print()
{;}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....










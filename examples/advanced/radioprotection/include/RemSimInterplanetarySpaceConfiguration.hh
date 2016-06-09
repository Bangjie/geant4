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
// $Id: RemSimInterplanetarySpaceConfiguration.hh,v 1.9 2005/05/19 13:30:59 guatelli Exp $
// GEANT4 tag $Name: geant4-07-01 $
//
// Author : Susanna Guatelli, guatelli@ge.infn.it
// 

#ifndef RemSimInterplanetarySpaceConfiguration_h
#define RemSimInterplanetarySpaceConfiguration_h 1

#include "RemSimVPrimaryGeneratorFactory.hh"
#include "globals.hh"
#include "G4DataVector.hh"
class G4ParticleGun;
class G4Event;
class RemSimRunAction;

class RemSimInterplanetarySpaceConfiguration : 
public RemSimVPrimaryGeneratorFactory
{

public:
  RemSimInterplanetarySpaceConfiguration();
  ~RemSimInterplanetarySpaceConfiguration();

public:
  void GeneratePrimaries(G4Event* anEvent);
  void MoonConfiguration();
  G4double  GetInitialEnergy();
  void SetMoon(G4bool);
  void Read(G4String);
  void ReadData(G4double, G4String);
  G4double  GetPrimaryParticleEnergyDistributionSum();

private:
  G4ParticleGun* particleGun;
  G4String spectrum;
  G4double energy;
  G4bool moon;
  G4DataVector* energies;
  G4DataVector* data;

};
#endif


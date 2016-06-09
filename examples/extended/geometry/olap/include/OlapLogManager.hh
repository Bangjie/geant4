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
// $Id: OlapLogManager.hh,v 1.1 2002/06/04 07:40:19 gcosmo Exp $
// GEANT4 tag $Name: geant4-07-01 $
//
// 
// --------------------------------------------------------------
// OlapLogManager
//
// Author: Martin Liendl - Martin.Liendl@cern.ch
//
// --------------------------------------------------------------
//
#ifndef OlapLogManager_h
#define OlapLogManager_h

#include "globals.hh" 

class OlapLogManager
{

public:
  ~OlapLogManager();
  static OlapLogManager * GetOlapLogManager();

  void Logging(G4String);
  void LogByVolume(G4String);
  G4bool areWeLogging;
  G4bool areWeLoggingByVolume;
  G4String filename;
  G4String logPath;


private:
  OlapLogManager();
  static OlapLogManager * theInstance;
  
};
#endif
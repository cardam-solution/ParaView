/*=========================================================================

  Program:   ParaView
  Module:    $RCSfile$

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkSession.h"

#include "vtkObjectFactory.h"
#include "vtkProcessModule2.h"

//----------------------------------------------------------------------------
vtkSession::vtkSession()
{
}

//----------------------------------------------------------------------------
vtkSession::~vtkSession()
{
}

//----------------------------------------------------------------------------
void vtkSession::Activate()
{
  vtkProcessModule2::GetProcessModule()->PushActiveSession(this);
}

//----------------------------------------------------------------------------
void vtkSession::DeActivate()
{
  vtkProcessModule2::GetProcessModule()->PopActiveSession(this);
}

//----------------------------------------------------------------------------
void vtkSession::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

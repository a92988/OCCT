// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <StepShape_ValueQualifier.ixx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_TypeQualifier.hxx>

StepShape_ValueQualifier::StepShape_ValueQualifier  ()    {  }

Standard_Integer  StepShape_ValueQualifier::CaseNum
  (const Handle(Standard_Transient)& ent) const
{
  if (ent.IsNull()) return 0;
  if (ent->IsKind(STANDARD_TYPE(StepShape_PrecisionQualifier))) return 1;
  if (ent->IsKind(STANDARD_TYPE(StepShape_TypeQualifier))) return 2;
  return 0;
}

Handle(StepShape_PrecisionQualifier)  StepShape_ValueQualifier::PrecisionQualifier () const
{  return Handle(StepShape_PrecisionQualifier)::DownCast(Value());  }

Handle(StepShape_TypeQualifier)  StepShape_ValueQualifier::TypeQualifier () const
{  return Handle(StepShape_TypeQualifier)::DownCast(Value());  }

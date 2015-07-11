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

#include <StepVisual_PresentationSizeAssignmentSelect.ixx>
#include <Interface_Macros.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_AreaInSet.hxx>

StepVisual_PresentationSizeAssignmentSelect::StepVisual_PresentationSizeAssignmentSelect () {  }

Standard_Integer StepVisual_PresentationSizeAssignmentSelect::CaseNum(const Handle(Standard_Transient)& ent) const
{
	if (ent.IsNull()) return 0;
	if (ent->IsKind(STANDARD_TYPE(StepVisual_PresentationView))) return 1;
	if (ent->IsKind(STANDARD_TYPE(StepVisual_PresentationArea))) return 2;
	if (ent->IsKind(STANDARD_TYPE(StepVisual_AreaInSet))) return 3;
	return 0;
}

Handle(StepVisual_PresentationView) StepVisual_PresentationSizeAssignmentSelect::PresentationView () const
{
	return GetCasted(StepVisual_PresentationView,Value());
}

Handle(StepVisual_PresentationArea) StepVisual_PresentationSizeAssignmentSelect::PresentationArea () const
{
	return GetCasted(StepVisual_PresentationArea,Value());
}

Handle(StepVisual_AreaInSet) StepVisual_PresentationSizeAssignmentSelect::AreaInSet () const
{
	return GetCasted(StepVisual_AreaInSet,Value());
}

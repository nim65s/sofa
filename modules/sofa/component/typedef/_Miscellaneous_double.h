/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2017 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF__Miscellaneous_double_H
#define SOFA_TYPEDEF__Miscellaneous_double_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>




#include <SofaValidation/DevAngleCollisionMonitor.h>
#include <SofaValidation/DevMonitorManager.h>
#include <SofaValidation/DevTensionMonitor.h>
#include <SofaValidation/EvalPointsDistance.h>
#include <SofaValidation/EvalSurfaceDistance.h>
#include <SofaValidation/ExtraMonitor.h>
#include <SofaBaseMechanics/MappedObject.h>
#include <SofaValidation/Monitor.h>
#include <SofaSphFluid/SpatialGridContainer.h>



//---------------------------------------------------------------------------------------------
//Typedef for DevAngleCollisionMonitor
typedef sofa::component::misc::DevAngleCollisionMonitor<sofa::defaulttype::StdRigidTypes<3, double> > DevAngleCollisionMonitorRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for DevMonitorManager
typedef sofa::component::misc::DevMonitorManager DevMonitorManager3d;



//---------------------------------------------------------------------------------------------
//Typedef for DevTensionMonitor
typedef sofa::component::misc::DevTensionMonitor<sofa::defaulttype::StdRigidTypes<3, double> > DevTensionMonitorRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for EvalPointsDistance
typedef sofa::component::misc::EvalPointsDistance<sofa::defaulttype::StdRigidTypes<3, double> > EvalPointsDistanceRigid3d;
typedef sofa::component::misc::EvalPointsDistance<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > EvalPointsDistance3d;



//---------------------------------------------------------------------------------------------
//Typedef for EvalSurfaceDistance
typedef sofa::component::misc::EvalSurfaceDistance<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > EvalSurfaceDistance3d;



//---------------------------------------------------------------------------------------------
//Typedef for ExtraMonitor
typedef sofa::component::misc::ExtraMonitor<sofa::defaulttype::StdRigidTypes<3, double> > ExtraMonitorRigid3d;
typedef sofa::component::misc::ExtraMonitor<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ExtraMonitor3d;
typedef sofa::component::misc::ExtraMonitor<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > ExtraMonitor6d;



//---------------------------------------------------------------------------------------------
//Typedef for MappedObject
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdRigidTypes<3, double> > MappedObjectRigid3d;
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdRigidTypes<2, double> > MappedObjectRigid2d;
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > MappedObject1d;
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > MappedObject2d;
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > MappedObject3d;
typedef sofa::component::container::MappedObject<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > MappedObject6d;



//---------------------------------------------------------------------------------------------
//Typedef for Monitor
typedef sofa::component::misc::Monitor<sofa::defaulttype::StdRigidTypes<3, double> > MonitorRigid3d;
typedef sofa::component::misc::Monitor<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > Monitor3d;
typedef sofa::component::misc::Monitor<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > Monitor6d;



//---------------------------------------------------------------------------------------------
//Typedef for SpatialGridContainer
typedef sofa::component::container::SpatialGridContainer<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > SpatialGridContainer3d;





#ifndef SOFA_FLOAT
typedef DevAngleCollisionMonitorRigid3d DevAngleCollisionMonitorRigid3;
typedef DevMonitorManager3d DevMonitorManager3;
typedef DevTensionMonitorRigid3d DevTensionMonitorRigid3;
typedef EvalPointsDistanceRigid3d EvalPointsDistanceRigid3;
typedef EvalPointsDistance3d EvalPointsDistance3;
typedef EvalSurfaceDistance3d EvalSurfaceDistance3;
typedef ExtraMonitorRigid3d ExtraMonitorRigid3;
typedef ExtraMonitor3d ExtraMonitor3;
typedef ExtraMonitor6d ExtraMonitor6;
typedef MappedObjectRigid3d MappedObjectRigid3;
typedef MappedObjectRigid2d MappedObjectRigid2;
typedef MappedObject1d MappedObject1;
typedef MappedObject2d MappedObject2;
typedef MappedObject3d MappedObject3;
typedef MappedObject6d MappedObject6;
typedef MonitorRigid3d MonitorRigid3;
typedef Monitor3d Monitor3;
typedef Monitor6d Monitor6;
typedef SpatialGridContainer3d SpatialGridContainer3;
#endif

#endif

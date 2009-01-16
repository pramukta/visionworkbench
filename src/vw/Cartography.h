// __BEGIN_LICENSE__
// 
// Copyright (C) 2006 United States Government as represented by the
// Administrator of the National Aeronautics and Space Administration
// (NASA).  All Rights Reserved.
// 
// Copyright 2006 Carnegie Mellon University. All rights reserved.
// 
// This software is distributed under the NASA Open Source Agreement
// (NOSA), version 1.3.  The NOSA has been approved by the Open Source
// Initiative.  See the file COPYING at the top of the distribution
// directory tree for the complete NOSA document.
// 
// THE SUBJECT SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY OF ANY
// KIND, EITHER EXPRESSED, IMPLIED, OR STATUTORY, INCLUDING, BUT NOT
// LIMITED TO, ANY WARRANTY THAT THE SUBJECT SOFTWARE WILL CONFORM TO
// SPECIFICATIONS, ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
// A PARTICULAR PURPOSE, OR FREEDOM FROM INFRINGEMENT, ANY WARRANTY THAT
// THE SUBJECT SOFTWARE WILL BE ERROR FREE, OR ANY WARRANTY THAT
// DOCUMENTATION, IF PROVIDED, WILL CONFORM TO THE SUBJECT SOFTWARE.
// 
// __END_LICENSE__

/// \file Cartography.h
/// 
/// A convenience header that includes the header files in vw/Cartography.
/// 
#ifndef __VW_CARTOGRAPHY_H__
#define __VW_CARTOGRAPHY_H__

#include <vw/Cartography/Datum.h>
#include <vw/Cartography/GeoReference.h>
#include <vw/Cartography/GeoTransform.h>
#include <vw/Cartography/FileIO.h>
#include <vw/Cartography/PointImageManipulation.h>
#include <vw/Cartography/OrthoImageView.h>
#include <vw/Cartography/Projection.h>
#include <vw/Cartography/GeoReferenceResourcePDS.h>

#if defined(VW_HAVE_PKG_CARTOGRAPHY) && (VW_HAVE_PKG_CARTOGRAPHY==1)
#include <vw/Cartography/CameraBBox.h>
#endif

#if defined(VW_HAVE_PKG_GDAL) && (VW_HAVE_PKG_GDAL==1)
#include <vw/Cartography/GeoReferenceResourceGDAL.h>
#endif

#endif // __VW_CARTOGRAPHY_H__
 

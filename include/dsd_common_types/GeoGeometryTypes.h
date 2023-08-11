/*
 * SPDX-FileCopyrightText: Copyright DB Netz AG
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DSD_RAIL_HORIZON_CORE_GEO_GEOMETRY_TYPES_H
#define DSD_RAIL_HORIZON_CORE_GEO_GEOMETRY_TYPES_H

#include <dsd_common_types/GeometryTypes.h>

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/geometries/linestring.hpp>
#include <boost/geometry/geometries/multi_linestring.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/polygon.hpp>

using PointXyWgs84 = boost::geometry::model::point<double, 2, boost::geometry::cs::geographic<boost::geometry::degree>>;
using PointXyzWgs84 = boost::geometry::model::point<double, 3, boost::geometry::cs::geographic<boost::geometry::degree>>;

using LineStringXyWgs84 = boost::geometry::model::linestring<PointXyWgs84>;
using LineStringXyzWgs84 = boost::geometry::model::linestring<PointXyzWgs84>;

using PolygonXyWgs84 = boost::geometry::model::polygon<PointXyWgs84>;
using PolygonXyzWgs84 = boost::geometry::model::polygon<PointXyzWgs84>;

using LineStringXyVectorWgs84 = std::vector<boost::geometry::model::linestring<PointXyWgs84>>;
using LineStringXyzVectorWgs84 = std::vector<boost::geometry::model::linestring<PointXyzWgs84>>;

using PolygonXyVectorWgs84 = std::vector<boost::geometry::model::polygon<PointXyWgs84>>;
using PolygonXyzVectorWgs84 = std::vector<boost::geometry::model::polygon<PointXyzWgs84>>;

using LookupMapIdLineStringXyWgs84 = std::map<Id, LineStringXyWgs84>;
using LookupMapIdLineStringXyzWgs84 = std::map<Id, LineStringXyzWgs84>;

using LookupMapIdPolygonXyWgs84 = std::map<Id, PolygonXyWgs84>;
using LookupMapIdPolygonXyzWgs84 = std::map<Id, PolygonXyzWgs84>;

#endif // DSD_RAIL_HORIZON_CORE_GEO_GEOMETRY_TYPES_H
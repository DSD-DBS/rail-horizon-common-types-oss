/*
 * SPDX-FileCopyrightText: Copyright DB Netz AG
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DSD_COMMON_TYPES_GEOMETRY_TYPES_H
#define DSD_COMMON_TYPES_GEOMETRY_TYPES_H

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/geometries/linestring.hpp>
#include <boost/geometry/geometries/multi_linestring.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/polygon.hpp>

#include <cstdint>


using PointXy = boost::geometry::model::point<double, 2, boost::geometry::cs::cartesian>;
using PointXyz = boost::geometry::model::point<double, 3, boost::geometry::cs::cartesian>;
using PointXyzm = boost::geometry::model::point<double, 4, boost::geometry::cs::cartesian>;
using PointType = boost::geometry::model::d2::point_xy<double>;

using LineStringXy = boost::geometry::model::linestring<PointXy>;
using LineStringXyz = boost::geometry::model::linestring<PointXyz>;

using PolygonXy = boost::geometry::model::polygon<PointXy>;
using PolygonXyz = boost::geometry::model::polygon<PointXyz>;

using LineStringXyVector = std::vector<boost::geometry::model::linestring<PointXy>>;
using LineStringXyzVector = std::vector<boost::geometry::model::linestring<PointXyz>>;

using PolygonXyVector = std::vector<boost::geometry::model::polygon<PointXy>>;
using PolygonXyzVector = std::vector<boost::geometry::model::polygon<PointXyz>>;

using Box = boost::geometry::model::box<PointXyz>;

using Index = unsigned int;
using Id = uint64_t;

using BoxIdPair = std::pair<Box, Id>;

#endif // DSD_COMMON_TYPES_GEOMETRY_TYPES_H

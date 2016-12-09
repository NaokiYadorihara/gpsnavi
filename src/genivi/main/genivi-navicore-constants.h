/*
 * GPS Navigation ---An open source GPS navigation core software
 *
 *
  * Copyright (c) 2016  Aisin AW, Ltd
 *
 * This program is dual licensed under GPL version 2 or a commercial license.
 * See the LICENSE file distributed with this source file.
 */
#ifndef GENIVI_NAVICORE_CONSTANTS_H
#define GENIVI_NAVICORE_CONSTANTS_H

#define NAVICORE_INVALID 0x0000
#define NAVICORE_DEFAULT 0xfffe
#define NAVICORE_ALL 0xffff
#define NAVICORE_AVAILABLE 0x0001
#define NAVICORE_NOT_AVAILABLE 0x0002
#define NAVICORE_TIME_FORMAT 0x0003
#define NAVICORE_12H 0x0004
#define NAVICORE_24H 0x0005
#define NAVICORE_COORDINATES_FORMAT 0x0006
#define NAVICORE_DEGREES 0x0007
#define NAVICORE_MINUTES 0x0008
#define NAVICORE_SECONDS 0x0009
#define NAVICORE_TIMESTAMP 0x0010
#define NAVICORE_TIMEZONE_OFFSET 0x0011
#define NAVICORE_DAYLIGHT_OFFSET 0x0012
#define NAVICORE_LOCALE 0x0025
#define NAVICORE_UNITS_OF_MEASUREMENT 0x0030
#define NAVICORE_LENGTH 0x0031
#define NAVICORE_METER 0x0032
#define NAVICORE_MILE 0x0033
#define NAVICORE_KM 0x0034
#define NAVICORE_YARD 0x0035
#define NAVICORE_FOOT 0x0036
#define NAVICORE_DISABLED_PROMPT 0x0041
#define NAVICORE_AUTOMATIC_PROMPT 0x0042
#define NAVICORE_MANUAL_PROMPT 0x0043
#define NAVICORE_CRUISE 0x0050
#define NAVICORE_MANEUVER_APPEARED 0x0051
#define NAVICORE_PRE_ADVICE 0x0052
#define NAVICORE_ADVICE 0x0053
#define NAVICORE_PASSED 0x0054
#define NAVICORE_ACTIVE 0x0060
#define NAVICORE_INACTIVE 0x0061
#define NAVICORE_STRAIGHT_ON 0x0070
#define NAVICORE_CROSSROAD 0x0071
#define NAVICORE_ROUNDABOUT 0x0072
#define NAVICORE_HIGHWAY_ENTER 0x0073
#define NAVICORE_HIGHWAY_EXIT 0x0074
#define NAVICORE_FOLLOW_SPECIFIC_LANE 0x0075
#define NAVICORE_DESTINATION 0x0076
#define NAVICORE_WAYPOINT 0x0077
#define NAVICORE_TURN 0x0078
#define NAVICORE_BIFURCATION 0x0079
#define NAVICORE_LEFT 0x0080
#define NAVICORE_SLIGHT_LEFT 0x0081
#define NAVICORE_HARD_LEFT 0x0082
#define NAVICORE_RIGHT 0x0083
#define NAVICORE_SLIGHT_RIGHT 0x0084
#define NAVICORE_HARD_RIGHT 0x0085
#define NAVICORE_UTURN_RIGHT 0x0086
#define NAVICORE_UTURN_LEFT 0x0087
#define NAVICORE_ALL_MANUAL 0x0090
#define NAVICORE_ALL_AUTOMATIC 0x0091
#define NAVICORE_TRAFFIC_MANUAL 0x0092
#define NAVICORE_OFF_ROUTE_MANUAL 0x0093
#define NAVICORE_LATITUDE 0x00a0
#define NAVICORE_LONGITUDE 0x00a1
#define NAVICORE_ALTITUDE 0x00a2
#define NAVICORE_HEADING 0x00a3
#define NAVICORE_SPEED 0x00a4
#define NAVICORE_CLIMB 0x00a5
#define NAVICORE_COUNTRY 0x00a6
#define NAVICORE_STATE 0x00a7
#define NAVICORE_CITY 0x00a8
#define NAVICORE_ZIPCODE 0x00a9
#define NAVICORE_STREET 0x00aa
#define NAVICORE_HOUSENUMBER 0x00ab
#define NAVICORE_CROSSING 0x00ac
#define NAVICORE_DISTRICT 0x00ad
#define NAVICORE_PHONENUMBER 0x00ae
#define NAVICORE_POINAME 0x00af
#define NAVICORE_TOWNCENTER 0x00b0
#define NAVICORE_LOCATION_INPUT 0x00b1
#define NAVICORE_FULL_ADDRESS 0x00b2
#define NAVICORE_COUNTRYCODE 0x00b3
#define NAVICORE_HOUSENAME 0x00b4
#define NAVICORE_POSTAL_CODE 0x00b5
#define NAVICORE_NOT_STARTED 0x0c0
#define NAVICORE_SEARCHING 0x00c1
#define NAVICORE_FINISHED 0x00c2
#define NAVICORE_OK 0x00d0
#define NAVICORE_UNKNOWN 0x00d1
#define NAVICORE_AMBIGUOUS 0x00d2
#define NAVICORE_INCONSISTENT 0x00d3
#define NAVICORE_GNSS_FIX_STATUS 0x00e0
#define NAVICORE_DR_STATUS 0x00e1
#define NAVICORE_MM_STATUS 0x00e2
#define NAVICORE_SIMULATION_MODE 0x00e3
#define NAVICORE_MATCH_TYPE 0x00f0
#define NAVICORE_ON_ROAD 0x00f1
#define NAVICORE_OFF_ROAD 0x00f2
#define NAVICORE_ON_FERRY 0x00f3
#define NAVICORE_IN_TUNNEL 0x00f4
#define NAVICORE_ON_CARPARK 0x00f5
#define NAVICORE_NO_FIX 0x0100
#define NAVICORE_TIME_FIX 0x0101
#define NAVICORE_2D_FIX 0x0102
#define NAVICORE_3D_FIX 0x0103
#define NAVICORE_SEGMENT_ID 0x0110
#define NAVICORE_DIRECTION_ON_SEGMENT 0x0112
#define NAVICORE_DISTANCE_ON_SEGMENT 0x0113
#define NAVICORE_INTERMEDIATE_POINTS 0x0120
#define NAVICORE_WAYPOINT_TYPE 0x0121
#define NAVICORE_SOFT_POINT 0x0122
#define NAVICORE_HARD_POINT 0x0123
#define NAVICORE_CALCULATION_OK 0x0130
#define NAVICORE_NO_POSITION 0x0131
#define NAVICORE_UNMATCHED_POSITION 0x0132
#define NAVICORE_UNREACHABLE_DESTINATION 0x0133
#define NAVICORE_UNFULFILLED_PREFERENCE_MODE 0x0134
#define NAVICORE_LINK_ID 0x0140
#define NAVICORE_START_LATITUDE 0x0141
#define NAVICORE_END_LATITUDE 0x0142
#define NAVICORE_START_LONGITUDE 0x0143
#define NAVICORE_END_LONGITUDE 0x0144
#define NAVICORE_START_ALTITUDE 0x0145
#define NAVICORE_END_ALTITUDE 0x0146
#define NAVICORE_ROAD_NAME 0x0147
#define NAVICORE_DISTANCE 0x0148
#define NAVICORE_TIME 0x0149
#define NAVICORE_MANEUVER 0x014a
#define NAVICORE_INSTRUCTION 0x014b
#define NAVICORE_BORDER_CROSSING 0x014c
#define NAVICORE_ADDITIONAL_INFORMATION 0x014d
#define NAVICORE_ROAD_NUMBER 0x014e
#define NAVICORE_START_OFFSET 0x014f
#define NAVICORE_FASTEST 0x0160
#define NAVICORE_SHORTEST 0x0161
#define NAVICORE_ECOLOGICAL 0x0162
#define NAVICORE_SCENIC 0x0163
#define NAVICORE_EASY 0x0164
#define NAVICORE_BALANCED 0x0166
#define NAVICORE_CHEAPEST 0x0167
#define NAVICORE_FERRY 0x0170
#define NAVICORE_TOLL_ROADS 0x0171
#define NAVICORE_TUNNELS 0x0172
#define NAVICORE_HIGHWAYS_MOTORWAYS 0x0173
#define NAVICORE_VEHICLE_SIZE_LIMIT 0x0174
#define NAVICORE_CRIME_AREAS 0x0175
#define NAVICORE_BY_CAR 0x0180
#define NAVICORE_ON_FOOT 0x0181
#define NAVICORE_LONG_RANGE_TRAINS 0x0182
#define NAVICORE_PUBLIC_TRANSPORTATION 0x0183
#define NAVICORE_BY_BICYCLE 0x0184
#define NAVICORE_BY_TRUCK 0x0185
#define NAVICORE_BLOCK_NUMBER 0x0186
#define NAVICORE_UNIT_NUMBER 0x0187
#define NAVICORE_BEGIN_STREET 0x0188
#define NAVICORE_ROAD_INTERSECTION 0x0189
#define NAVICORE_ARRIVAL_TIME 0x018a
#define NAVICORE_ARRIVAL_DATE 0x018b
#define NAVICORE_DEPARTURE_TIME 0x018c
#define NAVICORE_DEPARTURE_DATE 0x018d
#define NAVICORE_TOTAL_TIME 0x018e
#define NAVICORE_TOTAL_DISTANCE 0x018f
#define NAVICORE_PROHIBIT 0x0190
#define NAVICORE_AVOID 0x0191
#define NAVICORE_USE 0x0192
#define NAVICORE_PREFER 0x0193
#define NAVICORE_IGNORE 0x0194
#define NAVICORE_TRAFFIC_REALTIME 0x0200
#define NAVICORE_TRAFFIC 0x0210
#define NAVICORE_OFF_ROUTE 0x0211
#define NAVICORE_MANUAL 0x0212
#define NAVICORE_SIMULATION_STATUS_NO_SIMULATION 0x0220
#define NAVICORE_SIMULATION_STATUS_RUNNING 0x0221
#define NAVICORE_SIMULATION_STATUS_PAUSED 0x0222
#define NAVICORE_SIMULATION_STATUS_FIXED_POSITION 0x0223
#define NAVICORE_ROAD_FORM_CHANGE 0x0230
#define NAVICORE_ROAD_REGULAR 0x0231
#define NAVICORE_ROAD_HIGHWAY_MOTORWAY 0x0232
#define NAVICORE_ROAD_FERRY 0x0233
#define NAVICORE_DIRECTION 0x0240
#define NAVICORE_EXIT_NUMBER 0x0241
#define NAVICORE_ROAD_FORM 0x0242
#define NAVICORE_LANE_INFO 0x0243
#define NAVICORE_LANE_INFO_BITMASK_STRAIGHT 0x0001
#define NAVICORE_LANE_INFO_BITMASK_SLIGHTRIGHT 0x0002
#define NAVICORE_LANE_INFO_BITMASK_RIGHT 0x0004
#define NAVICORE_LANE_INFO_BITMASK_SHARPRIGHT 0x0008
#define NAVICORE_LANE_INFO_BITMASK_RIGHTUTURN 0x0010
#define NAVICORE_LANE_INFO_BITMASK_SLIGHTLEFT 0x0020
#define NAVICORE_LANE_INFO_BITMASK_LEFT 0x0040
#define NAVICORE_LANE_INFO_BITMASK_SHARPLEFT 0x0080
#define NAVICORE_LANE_INFO_BITMASK_LEFTUTURN 0x0100
#define NAVICORE_DIVIDER_UNDEFINED 0x0250
#define NAVICORE_DIVIDER_INTERRUPTEDLONG 0x0251
#define NAVICORE_DIVIDER_INTERRUPTEDSHORT 0x0252
#define NAVICORE_DIVIDER_SOLIDSINGLE 0x0253
#define NAVICORE_DIVIDER_SOLIDDOUBLE 0x0254
#define NAVICORE_DIVIDER_SOLIDINTERRUPTED 0x0255
#define NAVICORE_DIVIDER_INTERRUPTEDSOLID 0x0256

#endif

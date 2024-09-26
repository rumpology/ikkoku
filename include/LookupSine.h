#pragma once
const double lookup_sine[360] = {0.0000,
                                 0.0175,
                                 0.0349,
                                 0.0523,
                                 0.0698,
                                 0.0872,
                                 0.1045,
                                 0.1219,
                                 0.1392,
                                 0.1564,
                                 0.1736,
                                 0.1908,
                                 0.2080,
                                 0.2250,
                                 0.2419,
                                 0.2588,
                                 0.2756,
                                 0.2924,
                                 0.3090,
                                 0.3256,
                                 0.3420,
                                 0.3584,
                                 0.3746,
                                 0.3907,
                                 0.4067,
                                 0.4226,
                                 0.4384,
                                 0.4540,
                                 0.4695,
                                 0.4848,
                                 0.5000,
                                 0.5150,
                                 0.5299,
                                 0.5446,
                                 0.5592,
                                 0.5736,
                                 0.5878,
                                 0.6018,
                                 0.6157,
                                 0.6293,
                                 0.6428,
                                 0.6561,
                                 0.6691,
                                 0.6818,
                                 0.6947,
                                 0.7071,
                                 0.7188,
                                 0.7301,
                                 0.7408,
                                 0.7504,
                                 0.7591,
                                 0.7660,
                                 0.7716,
                                 0.7759,
                                 0.7789,
                                 0.7809,
                                 0.7818,
                                 0.7818,
                                 0.7799,
                                 0.7760,
                                 0.7700,
                                 0.7618,
                                 0.7516,
                                 0.7394,
                                 0.7250,
                                 0.7085,
                                 0.6899,
                                 0.6691,
                                 0.6461,
                                 0.6208,
                                 0.5934,
                                 0.5638,
                                 0.5329,
                                 0.4999,
                                 0.4649,
                                 0.4281,
                                 0.3896,
                                 0.3495,
                                 0.3078,
                                 0.2647,
                                 0.2202,
                                 0.1745,
                                 0.1275,
                                 0.0793,
                                 0.0301,
                                 -0.0191,
                                 -0.0698,
                                 -0.1219,
                                 -0.1750,
                                 -0.2290,
                                 -0.2837,
                                 -0.3395,
                                 -0.3962,
                                 -0.4534,
                                 -0.5117,
                                 -0.5709,
                                 -0.6306,
                                 -0.6906,
                                 -0.7505,
                                 -0.8100,
                                 -0.8688,
                                 -0.9267,
                                 -0.9835,
                                 -1.0390,
                                 -1.0930,
                                 -1.1453,
                                 -1.1957,
                                 -1.2441,
                                 -1.2904,
                                 -1.3346,
                                 -1.3766,
                                 -1.4164,
                                 -1.4540,
                                 -1.4892,
                                 -1.5219,
                                 -1.5520,
                                 -1.5795,
                                 -1.6042,
                                 -1.6262,
                                 -1.6455,
                                 -1.6621,
                                 -1.6759,
                                 -1.6869,
                                 -1.6950,
                                 -1.7003,
                                 -1.7028,
                                 -1.7025,
                                 -1.6994,
                                 -1.6934,
                                 -1.6846,
                                 -1.6731,
                                 -1.6590,
                                 -1.6422,
                                 -1.6230,
                                 -1.6013,
                                 -1.5772,
                                 -1.5507,
                                 -1.5219,
                                 -1.4908,
                                 -1.4574,
                                 -1.4217,
                                 -1.3839,
                                 -1.3439,
                                 -1.3017,
                                 -1.2574,
                                 -1.2110,
                                 -1.1625,
                                 -1.1120,
                                 -1.0596,
                                 -1.0052,
                                 -0.9489,
                                 -0.8909,
                                 -0.8310,
                                 -0.7694,
                                 -0.7059,
                                 -0.6407,
                                 -0.5737,
                                 -0.5051,
                                 -0.4350,
                                 -0.3634,
                                 -0.2904,
                                 -0.2159,
                                 -0.1399,
                                 -0.0625,
                                 0.0174,
                                 0.0985,
                                 0.1813,
                                 0.2661,
                                 0.3529,
                                 0.4417,
                                 0.5325,
                                 0.6253,
                                 0.7200,
                                 0.8166,
                                 0.9151,
                                 1.0155,
                                 1.1180,
                                 1.2224,
                                 1.3289,
                                 1.4375,
                                 1.5482,
                                 1.6611,
                                 1.7763,
                                 1.8940,
                                 2.0142,
                                 2.1370,
                                 2.2624,
                                 2.3906,
                                 2.5215,
                                 2.6553,
                                 2.7920,
                                 2.9316,
                                 3.0741,
                                 3.2197,
                                 3.3683,
                                 3.5200,
                                 3.6749,
                                 3.8329,
                                 3.9931,
                                 4.1565,
                                 4.3220,
                                 4.4897,
                                 4.6595,
                                 4.8315,
                                 5.0056,
                                 5.1819,
                                 5.3604,
                                 5.5410,
                                 5.7238,
                                 5.9087,
                                 6.0958,
                                 6.2850,
                                 6.4764,
                                 6.6700,
                                 6.8657,
                                 7.0636,
                                 7.2636,
                                 7.4658,
                                 7.6701,
                                 7.8767

                                 ,
                                 8.0855,
                                 8.2964,
                                 8.5095,
                                 8.7248,
                                 8.9424,
                                 9.1622,
                                 9.3843,
                                 9.6087,
                                 9.8354,
                                 10.0644,
                                 10.2957,
                                 10.5294,
                                 10.7655,
                                 11.0040,
                                 11.2448,
                                 11.4881,
                                 11.7339,
                                 11.9822,
                                 12.2329,
                                 12.4859,
                                 12.7415,
                                 12.9996,
                                 13.2602,
                                 13.5234,
                                 13.7891,
                                 14.0573,
                                 14.3281,
                                 14.6015,
                                 14.8775,
                                 15.1561,
                                 15.4373,
                                 15.7211,
                                 16.0076,
                                 16.2968,
                                 16.5887,
                                 16.8833,
                                 17.1807,
                                 17.4808,
                                 17.7837,
                                 18.0894,
                                 18.3979,
                                 18.7093,
                                 19.0236,
                                 19.3408,
                                 19.6609,
                                 19.9839,
                                 20.3099,
                                 20.6389,
                                 20.9709,
                                 21.3059,
                                 21.6439,
                                 21.9849,
                                 22.3289,
                                 22.6760,
                                 23.0261,
                                 23.3792,
                                 23.7353,
                                 24.0945,
                                 24.4567,
                                 24.8218,
                                 25.1899,
                                 25.5609,
                                 25.9348,
                                 26.3116,
                                 26.6913,
                                 27.0739,
                                 27.4594,
                                 27.8478,
                                 28.2390,
                                 28.6329,
                                 29.0297,
                                 29.4293,
                                 29.8316,
                                 30.2367,
                                 30.6445,
                                 31.0550,
                                 31.4683,
                                 31.8842,
                                 32.3028,
                                 32.7239,
                                 33.1478,
                                 33.5742,
                                 34.0033,
                                 34.4350,
                                 34.8693,
                                 35.3061,
                                 35.7455,
                                 36.1875,
                                 36.6320,
                                 37.0791,
                                 37.5286,
                                 37.9807,
                                 38.4352,
                                 38.8922,
                                 39.3516,
                                 39.8135,
                                 40.2788,
                                 40.7466,
                                 41.2177,
                                 41.6912,
                                 42.1671,
                                 42.6453,
                                 43.1259,
                                 43.6088,
                                 44.0940,
                                 44.5815,
                                 45.0714,
                                 45.5636,
                                 46.0581,
                                 46.5549,
                                 47.0539,
                                 47.5553,
                                 48.0590,
                                 48.5650,
                                 49.0732,
                                 49.5837,
                                 50.0964,
                                 50.6115,
                                 51.1288,
                                 51.6483,
                                 52.1702,
                                 52.6943,
                                 53.2208,
                                 53.7495,
                                 54.2805,
                                 54.8138,
                                 55.3494,
                                 55.8873,
                                 56.4275,
                                 56.9700,
                                 57.5148,
                                 58.0619,
                                 58.6113,
                                 59.1630,
                                 59.7170,
                                 60.2733,
                                 60.8320,
                                 61.3930,
                                 61.9562,
                                 62.5218};

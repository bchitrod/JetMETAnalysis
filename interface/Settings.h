const int NETA                        = 82;
const int NETA_Half                   = 41;
const int NETA_Coarse                 = 6;
const int NETA_HLT                    = 78;
const int NPtBins                     = 37;
const int NPtBinsHLT                  = 40;
const int NPhi                        = 11;
const int NPileup                     = 12;
const int NAlgs                       = 104;
const int NRespBins                   = 200;
const int RespLow                     = 0;
const int RespHigh                    = 2;
const int CorrLow                     = 0;
const int CorrHigh                    = 10;
const int NRhoBins                    = 1000;
const int RhoLow                      = 0;
const int RhoHigh                     = 100;

const char Pt[NPtBins+1][10]          = {"10","10.5","11","11.5","12","12.5","13","13.5","14","15","17","20","23","27","30","35","40","45","57","72","90","120","150","200","300","400","550","750","1000","1500","2000","2500","3000","3500","4000","4500","5000","10000"};

const char eta_boundaries[NETA+1][10] = {"-5.191","-4.889","-4.716","-4.538","-4.363","-4.191","-4.013","-3.839","-3.664","-3.489",
"-3.314", "-3.139","-2.964","-2.853","-2.65", "-2.5",  "-2.322","-2.172","-2.043","-1.93",
"-1.83",  "-1.74", "-1.653","-1.566","-1.479","-1.392","-1.305","-1.218","-1.131","-1.044",
"-0.957", "-0.879","-0.783","-0.696","-0.609","-0.522","-0.435","-0.348","-0.261","-0.174",
"-0.087", "0",     "0.087", "0.174", "0.261", "0.348", "0.435" ,"0.522", "0.609", "0.696",
"0.783",  "0.879", "0.957", "1.044", "1.131", "1.218", "1.305" ,"1.392", "1.479", "1.566",
"1.653",  "1.74",  "1.83",  "1.93",  "2.043", "2.172", "2.322" ,"2.5",   "2.65",  "2.853",
"2.964",  "3.139", "3.314", "3.489", "3.664", "3.839", "4.013" ,"4.191", "4.363", "4.538",
"4.716","4.889","5.191"};

const char eta_boundaries_coarse[NETA_Coarse+1][10] = {"-5","-3","-1.3","0","1.3","3","5"};

const char eta_boundaries_HLT[NETA_HLT+1][10] = {"-5.191","-4.538","-4.363","-4.191","-4.013","-3.839","-3.664","-3.489",
"-3.314", "-3.139","-2.964","-2.853","-2.65", "-2.5",  "-2.322","-2.172","-2.043","-1.93",
"-1.83",  "-1.74", "-1.653","-1.566","-1.479","-1.392","-1.305","-1.218","-1.131","-1.044",
"-0.957", "-0.879","-0.783","-0.696","-0.609","-0.522","-0.435","-0.348","-0.261","-0.174",
"-0.087", "0",     "0.087", "0.174", "0.261", "0.348", "0.435" ,"0.522", "0.609", "0.696",
"0.783",  "0.879", "0.957", "1.044", "1.131", "1.218", "1.305" ,"1.392", "1.479", "1.566",
"1.653",  "1.74",  "1.83",  "1.93",  "2.043", "2.172", "2.322" ,"2.5",   "2.65",  "2.853",
"2.964",  "3.139", "3.314", "3.489", "3.664", "3.839", "4.013" ,"4.191", "4.363", "4.538","5.191"};

const char pileup_boundaries[NPileup][10] = {"0","0","1","5","6","10","11","15","16","25","26","inf"};

const double veta[NETA+1] = {-5.191,-4.889,-4.716,-4.538,-4.363,-4.191,-4.013,-3.839,-3.664,-3.489,
-3.314, -3.139,-2.964,-2.853,-2.65, -2.5,  -2.322,-2.172,-2.043,-1.93,
-1.83,  -1.74, -1.653,-1.566,-1.479,-1.392,-1.305,-1.218,-1.131,-1.044,
-0.957, -0.879,-0.783,-0.696,-0.609,-0.522,-0.435,-0.348,-0.261,-0.174,
-0.087, 0,     0.087, 0.174, 0.261, 0.348, 0.435 ,0.522, 0.609, 0.696,
0.783,  0.879, 0.957, 1.044, 1.131, 1.218, 1.305 ,1.392, 1.479, 1.566,
1.653,  1.74,  1.83,  1.93,  2.043, 2.172, 2.322 ,2.5,   2.65,  2.853,
2.964,  3.139, 3.314, 3.489, 3.664, 3.839, 4.013 ,4.191, 4.363, 4.538,
4.716,4.889,5.191};

const double veta_half[NETA_Half+1] = {0, 0.087, 0.174, 0.261, 0.348, 0.435 ,0.522, 0.609, 0.696,
0.783,  0.879, 0.957, 1.044, 1.131, 1.218, 1.305 ,1.392, 1.479, 1.566,
1.653,  1.74,  1.83,  1.93,  2.043, 2.172, 2.322 ,2.5,   2.65,  2.853,
2.964,  3.139, 3.314, 3.489, 3.664, 3.839, 4.013 ,4.191, 4.363, 4.538,
4.716,4.889,5.191};

const double veta_coarse[NETA_Coarse+1] = {-5.0,-3.0,-1.3,0,1.3,3,5};

const double veta_HLT[NETA_HLT+1] = {-5.191,-4.538,-4.363,-4.191,-4.013,-3.839,-3.664,-3.489,
-3.314, -3.139,-2.964,-2.853,-2.65, -2.5,  -2.322,-2.172,-2.043,-1.93,
-1.83,  -1.74, -1.653,-1.566,-1.479,-1.392,-1.305,-1.218,-1.131,-1.044,
-0.957, -0.879,-0.783,-0.696,-0.609,-0.522,-0.435,-0.348,-0.261,-0.174,
-0.087, 0,     0.087, 0.174, 0.261, 0.348, 0.435 ,0.522, 0.609, 0.696,
0.783,  0.879, 0.957, 1.044, 1.131, 1.218, 1.305 ,1.392, 1.479, 1.566,
1.653,  1.74,  1.83,  1.93,  2.043, 2.172, 2.322 ,2.5,   2.65,  2.853,
2.964,  3.139, 3.314, 3.489, 3.664, 3.839, 4.013 ,4.191, 4.363, 4.538,5.191};

const double vpt[NPtBins+1] = {10,10.5,11,11.5,12,12.5,13,13.5,14,15,17,20,23,27,30,35,40,45,57,72,90,120,150,200,300,400,550,750,1000,1500,2000,2500,3000,3500,4000,4500,5000,10000};

const double vpt_HLT[NPtBinsHLT+1] = {0.1,1,7,10,10.5,11,11.5,12,12.5,13,13.5,14,15,17,20,23,27,30,35,40,45,57,72,90,120,150,200,300,400,550,750,1000,1500,2000,2500,3000,3500,4000,4500,5000,10000};

const double vphi[NPhi+1] = {-3.141,-2.700,-2.100,-1.500,-0.900,-0.300,0.300,0.900,1.500,2.100,2.700,3.141};

const double vpileup[NPileup] = {0,0,1,5,6,10,11,15,16,25,26,1000};

const char algs_all[NAlgs][20] = {"ic5calo","ak5calo","gk5calo","sc5calo","kt4calo","kt5calo","ca4calo","ca5calo","ak5calol1","ak5calol1off","ak5calol1offl2l3","ic5calol2l3","ak5calol2l3","gk5calol2l3","sc5calol2l3","kt4calol2l3","kt5calol2l3","ca4calol2l3","ca5calol2l3","ak7calo","gk7calo","sc7calo","kt6calo","kt7calo","ca6calo","ca7calo","ak7calol1","ak7calol1off","ak7calol2l3","gk7calol2l3","sc7calol2l3","kt6calol2l3","kt7calol2l3","ca6calol2l3","ca7calol2l3","ak5caloHLT","ak5caloHLTl1","ic5pf","ak5pf","gk5pf","sc5pf","kt4pf","kt5pf","ca4pf","ca5pf","ak5pfl1","ak5pfl1l2l3","ak5pfl1off","ic5pfl2l3","ak5pfl2l3","gk5pfl2l3","sc5pfl2l3","kt4pfl2l3","kt5pfl2l3","ca4pfl2l3","ca5pfl2l3","ak7pf","gk7pf","sc7pf","kt6pf","kt7pf","ca6pf","ca7pf","ak7pfl1","ak7pfl1off","ak7pfl2l3","gk7pfl2l3","sc7pfl2l3","kt6pfl2l3","kt7pfl2l3","ca6pfl2l3","ca7pfl2l3","ak5pfchs","ak5pfchsl1","ak5pfchsl1l2l3","ak5pfchsl1off","ak7pfchs","ak7pfchsl1","ak7pfchsl1off","ak5pfHLT","ak5pfHLTl1","ak5pfchsHLT","ak5pfchsHLTl1","ic5jpt","sc5jpt","ak5jpt","ak7jpt","ak5jptl1","ak5jptl1off","ak5jptl1l2l3","ak7jptl1","ak7jptl1off","ak3pf","ak4pf","ak6pf","ak8pf","ak9pf","ak10pf","ak3pfl1","ak4pfl1","ak6pfl1","ak8pfl1","ak9pfl1","ak10pfl1"};

const double drmax_all[NAlgs] = {0.210,0.250,0.210,0.240,0.200,0.240,0.190,0.220,0.250,0.250,0.250,0.210,0.205,0.210,0.240,0.200,0.240,0.190,0.220,0.350,0.290,0.340,0.275,0.325,0.250,0.300,0.350,0.350,0.280,0.290,0.340,0.275,0.325,0.250,0.300,0.250,0.250,0.105,0.250,0.110,0.135,0.120,0.145,0.115,0.125,0.250,0.250,0.250,0.105,0.110,0.110,0.135,0.120,0.145,0.115,0.125,0.350,0.150,0.180,0.180,0.210,0.150,0.190,0.350,0.350,0.150,0.150,0.180,0.180,0.210,0.150,0.190,0.250,0.250,0.250,0.250,0.350,0.350,0.350,0.250,0.250,0.250,0.250,0.210,0.240,0.205,0.205,0.205,0.205,0.205,0.205,0.205,0.150,0.200,0.300,0.400,0.450,0.500,0.150,0.200,0.300,0.400,0.450,0.500};

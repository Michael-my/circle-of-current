#ifndef trig_tbl_inc
#define trig_tbl_inc

#include <avr/pgmspace.h>

#define atan_multiplier 50
const double atan_tbl [atan_multiplier + 1] PROGMEM = {
	 0.000000000000000,  0.019997333973151,  0.039978687123290,  0.059928155121208,  0.079829985712237, 
	 0.099668652491162,  0.119428926018338,  0.139095941482071,  0.158655262186401,  0.178092938231198, 
	 0.197395559849881,  0.216550304976089,  0.235544980720863,  0.254368058553266,  0.273008703086711, 
	 0.291456794477867,  0.309702944542456,  0.327738506780555,  0.345555580581712,  0.363147009946176, 
	 0.380506377112365,  0.397627991522129,  0.414506874584786,  0.431138740718782,  0.447519975157170, 
	 0.463647609000806,  0.479519291992596,  0.495133263468404,  0.510488321916776,  0.525583793551610, 
	 0.540419500270584,  0.554995727338587,  0.569313191100662,  0.583373006993856,  0.597176658092678, 
	 0.610725964389209,  0.624023052976757,  0.637070329275684,  0.649870449411948,  0.662426293833151, 
	 0.674740942223553,  0.686817649758645,  0.698659824721463,  0.710271007486686,  0.721654850864761, 
	 0.732815101786507,  0.743755584298860,  0.754480183834406,  0.764992832710910,  0.775297496812126, 
	 0.785398163397448, 
};

#define asin_multiplier 50
const double asin_tbl [asin_multiplier + 1] PROGMEM = {
	 0.000000000000000,  0.020001333573391,  0.040010674353989,  0.060036058445278,  0.080085580033659, 
	 0.100167421161560,  0.120289882394788,  0.140461414709856,  0.160690652951911,  0.180986451246548, 
	 0.201357920790331,  0.221814470496794,  0.242365851038963,  0.263022202908469,  0.283794109208328, 
	 0.304692654015398,  0.325729487294630,  0.346916897527162,  0.368267893436640,  0.389796296474261, 
	 0.411516846067488,  0.433445320069886,  0.455598673395823,  0.477995198518952,  0.500654712404588, 
	 0.523598775598299,  0.546850950695944,  0.570437109399922,  0.594385800001062,  0.618728690672251, 
	 0.643501108793284,  0.668742703202372,  0.694498265626556,  0.720818760870090,  0.747762634659921, 
	 0.775397496610753,  0.803802318933030,  0.833070358341648,  0.863313115015554,  0.894665817234235, 
	 0.927295218001612,  0.961411018764102,  0.997283222371800,  1.035269672480510,  1.075862200454000, 
	 1.119769514998630,  1.168080485214240,  1.222630305521940,  1.287002217586570,  1.370461484471780, 
	 1.570796326794900, 
};

#endif
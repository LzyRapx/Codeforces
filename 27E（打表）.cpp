#include<bits/stdc++.h>
using namespace std;
 long long dp[1010];
void init()
{
	dp[1]=1;
dp[2]=2;
dp[3]=4;
dp[4]=6;
dp[5]=16;
dp[6]=12;
dp[7]=64;
dp[8]=24;
dp[9]=36;
dp[10]=48;
dp[11]=1024;
dp[12]=60;
dp[13]=4096;
dp[14]=192;
dp[15]=144;
dp[16]=120;
dp[17]=65536;
dp[18]=180;
dp[19]=262144;
dp[20]=240;
dp[21]=576;
dp[22]=3072;
dp[23]=4194304;
dp[24]=360;
dp[25]=1296;
dp[26]=12288;
dp[27]=900;
dp[28]=960;
dp[29]=268435456;
dp[30]=720;
dp[31]=1073741824;
dp[32]=840;
dp[33]=9216;
dp[34]=196608;
dp[35]=5184;
dp[36]=1260;
dp[37]=68719476736;
dp[38]=786432;
dp[39]=36864;
dp[40]=1680;
dp[41]=1099511627776;
dp[42]=2880;
dp[43]=4398046511104;
dp[44]=15360;
dp[45]=3600;
dp[46]=12582912;
dp[47]=70368744177664;
dp[48]=2520;
dp[49]=46656;
dp[50]=6480;
dp[51]=589824;
dp[52]=61440;
dp[53]=4503599627370496;
dp[54]=6300;
dp[55]=82944;
dp[56]=6720;
dp[57]=2359296;
dp[58]=805306368;
dp[59]=288230376151711744;
dp[60]=5040;
dp[61]=1152921504606846976;
dp[62]=3221225472;
dp[63]=14400;
dp[64]=7560;
dp[65]=331776;
dp[66]=46080;
dp[68]=983040;
dp[69]=37748736;
dp[70]=25920;
dp[72]=10080;
dp[74]=206158430208;
dp[75]=32400;
dp[76]=3932160;
dp[77]=746496;
dp[78]=184320;
dp[80]=15120;
dp[81]=44100;
dp[82]=3298534883328;
dp[84]=20160;
dp[85]=5308416;
dp[86]=13194139533312;
dp[87]=2415919104;
dp[88]=107520;
dp[90]=25200;
dp[91]=2985984;
dp[92]=62914560;
dp[93]=9663676416;
dp[94]=211106232532992;
dp[95]=21233664;
dp[96]=27720;
dp[98]=233280;
dp[99]=230400;
dp[100]=45360;
dp[102]=2949120;
dp[104]=430080;
dp[105]=129600;
dp[106]=13510798882111488;
dp[108]=50400;
dp[110]=414720;
dp[111]=618475290624;
dp[112]=60480;
dp[114]=11796480;
dp[115]=339738624;
dp[116]=4026531840;
dp[117]=921600;
dp[118]=864691128455135232;
dp[119]=47775744;
dp[120]=55440;
dp[121]=60466176;
dp[122]=3458764513820540928;
dp[123]=9895604649984;
dp[124]=16106127360;
dp[125]=810000;
dp[126]=100800;
dp[128]=83160;
dp[129]=39582418599936;
dp[130]=1658880;
dp[132]=322560;
dp[133]=191102976;
dp[135]=176400;
dp[136]=6881280;
dp[138]=188743680;
dp[140]=181440;
dp[141]=633318697598976;
dp[143]=241864704;
dp[144]=110880;
dp[145]=21743271936;
dp[147]=1166400;
dp[148]=1030792151040;
dp[150]=226800;
dp[152]=27525120;
dp[153]=14745600;
dp[154]=3732480;
dp[155]=86973087744;
dp[156]=1290240;
dp[159]=40532396646334464;
dp[160]=166320;
dp[161]=3057647616;
dp[162]=352800;
dp[164]=16492674416640;
dp[165]=2073600;
dp[168]=221760;
dp[169]=2176782336;
dp[170]=26542080;
dp[171]=58982400;
dp[172]=65970697666560;
dp[174]=12079595520;
dp[175]=3240000;
dp[176]=967680;
dp[177]=2594073385365405696;
dp[180]=277200;
dp[182]=14929920;
dp[184]=440401920;
dp[185]=5566277615616;
dp[186]=48318382080;
dp[187]=3869835264;
dp[188]=1055531162664960;
dp[189]=705600;
dp[190]=106168320;
dp[192]=332640;
dp[195]=8294400;
dp[196]=1632960;
dp[198]=1612800;
dp[200]=498960;
dp[203]=195689447424;
dp[204]=20643840;
dp[205]=89060441849856;
dp[207]=943718400;
dp[208]=3870720;
dp[209]=15479341056;
dp[210]=907200;
dp[212]=67553994410557440;
dp[215]=356241767399424;
dp[216]=554400;
dp[217]=782757789696;
dp[220]=2903040;
dp[221]=34828517376;
dp[222]=3092376453120;
dp[224]=665280;
dp[225]=1587600;
dp[228]=82575360;
dp[230]=1698693120;
dp[231]=18662400;
dp[232]=28185722880;
dp[234]=6451200;
dp[235]=5699868278390784;
dp[236]=4323455642275676160;
dp[238]=238878720;
dp[240]=720720;
dp[242]=302330880;
dp[243]=2822400;
dp[245]=29160000;
dp[246]=49478023249920;
dp[247]=139314069504;
dp[248]=112742891520;
dp[250]=5670000;
dp[252]=1108800;
dp[253]=247669456896;
dp[255]=132710400;
dp[256]=1081080;
dp[258]=197912092999680;
dp[259]=50096498540544;
dp[260]=11612160;
dp[261]=60397977600;
dp[264]=3548160;
dp[265]=364791569817010176;
dp[266]=955514880;
dp[270]=1940400;
dp[272]=61931520;
dp[273]=74649600;
dp[275]=51840000;
dp[276]=1321205760;
dp[279]=241591910400;
dp[280]=1995840;
dp[282]=3166593487994880;
dp[285]=530841600;
dp[286]=1209323520;
dp[287]=801543976648704;
dp[288]=1441440;
dp[289]=2821109907456;
dp[290]=108716359680;
dp[294]=8164800;
dp[296]=7215545057280;
dp[297]=11289600;
dp[299]=2229025112064;
dp[300]=2494800;
dp[301]=3206175906594816;
dp[304]=247726080;
dp[306]=103219200;
dp[308]=26127360;
dp[310]=434865438720;
dp[312]=14192640;
dp[315]=6350400;
dp[318]=202661983231672320;
dp[319]=15850845241344;
dp[320]=2162160;
dp[322]=15288238080;
dp[323]=11284439629824;
dp[324]=3880800;
dp[325]=207360000;
dp[328]=115448720916480;
dp[329]=51298814505517056;
dp[330]=14515200;
dp[333]=15461882265600;
dp[336]=2882880;
dp[338]=10883911680;
dp[340]=185794560;
dp[341]=63403380965376;
dp[342]=412876800;
dp[343]=729000000;
dp[344]=461794883665920;
dp[345]=8493465600;
dp[348]=84557168640;
dp[350]=22680000;
dp[351]=45158400;
dp[352]=10644480;
dp[357]=1194393600;
dp[360]=3603600;
dp[361]=101559956668416;
dp[363]=1511654400;
dp[364]=104509440;
dp[368]=3963617280;
dp[369]=247390116249600;
dp[370]=27831388078080;
dp[371]=3283124128353091584;
dp[372]=338228674560;
dp[374]=19349176320;
dp[375]=39690000;
dp[376]=7388718138654720;
dp[377]=142657607172096;
dp[378]=7761600;
dp[380]=743178240;
dp[384]=4324320;
dp[385]=466560000;
dp[387]=989560464998400;
dp[390]=58060800;
dp[391]=180551034077184;
dp[392]=17962560;
dp[396]=17740800;
dp[399]=4777574400;
dp[400]=6486480;
dp[403]=570630428688384;
dp[405]=21344400;
dp[406]=978447237120;
dp[407]=4057816381784064;
dp[408]=227082240;
dp[410]=445302209249280;
dp[414]=6606028800;
dp[416]=42577920;
dp[418]=77396705280;
dp[420]=9979200;
dp[423]=15832967439974400;
dp[424]=472877960873902080;
dp[425]=3317760000;
dp[429]=6046617600;
dp[430]=1781208836997120;
dp[432]=7207200;
dp[434]=3913788948480;
dp[435]=543581798400;
dp[437]=1624959306694656;
dp[440]=31933440;
dp[441]=57153600;
dp[442]=174142586880;
dp[444]=21646635171840;
dp[448]=8648640;
dp[450]=17463600;
dp[451]=64925062108545024;
dp[455]=1866240000;
dp[456]=908328960;
dp[459]=722534400;
dp[460]=11890851840;
dp[462]=130636800;
dp[464]=253671505920;
dp[465]=2174327193600;
dp[468]=70963200;
dp[470]=28499341391953920;
dp[473]=259700248434180096;
dp[475]=13271040000;
dp[476]=1672151040;
dp[477]=1013309916158361600;
dp[480]=10810800;
dp[481]=36520347436056576;
dp[483]=76441190400;
dp[484]=2116316160;
dp[486]=31046400;
dp[490]=204120000;
dp[492]=346346162749440;
dp[493]=11555266180939776;
dp[494]=696570347520;
dp[495]=101606400;
dp[496]=1014686023680;
dp[500]=62370000;
dp[504]=14414400;
dp[506]=1238347284480;
dp[507]=54419558400;
dp[510]=928972800;
dp[512]=17297280;
dp[513]=2890137600;
dp[516]=1385384650997760;
dp[517]=4155203974946881536;
dp[518]=250482492702720;
dp[520]=127733760;
dp[522]=422785843200;
dp[525]=158760000;
dp[527]=46221064723759104;
dp[528]=46126080;
dp[529]=131621703842267136;
dp[530]=1823957849085050880;
dp[532]=6688604160;
dp[533]=584325558976905216;
dp[539]=11664000000;
dp[540]=25225200;
dp[544]=681246720;
dp[546]=522547200;
dp[550]=362880000;
dp[551]=103997395628457984;
dp[552]=14533263360;
dp[555]=139156940390400;
dp[558]=1691143372800;
dp[559]=2337302235907620864;
dp[560]=25945920;
dp[561]=96745881600;
dp[564]=22166154415964160;
dp[567]=85377600;
dp[570]=3715891200;
dp[572]=8465264640;
dp[574]=4007719883243520;
dp[575]=212336640000;
dp[576]=21621600;
dp[578]=14105549537280;
dp[580]=761014517760;
dp[585]=406425600;
dp[588]=89812800;
dp[589]=415989582513831936;
dp[592]=64939905515520;
dp[594]=124185600;
dp[595]=29859840000;
dp[598]=11145125560320;
dp[600]=32432400;
dp[602]=16030879532974080;
dp[605]=37791360000;
dp[608]=2724986880;
dp[609]=4892236185600;
dp[612]=1135411200;
dp[615]=2226511046246400;
dp[616]=287400960;
dp[620]=3044058071040;
dp[621]=46242201600;
dp[624]=184504320;
dp[625]=1944810000;
dp[627]=386983526400;
dp[629]=2958148142320582656;
dp[630]=69854400;
dp[636]=1418633882621706240;
dp[637]=46656000000;
dp[638]=79254226206720;
dp[640]=36756720;
dp[644]=107017666560;
dp[645]=8906044184985600;
dp[646]=56422198149120;
dp[648]=50450400;
dp[650]=1451520000;
dp[651]=19568944742400;
dp[656]=1039038488248320;
dp[658]=256494072527585280;
dp[660]=159667200;
dp[663]=870712934400;
dp[665]=119439360000;
dp[666]=108233175859200;
dp[667]=8423789045905096704;
dp[672]=43243200;
dp[675]=192099600;
dp[676]=76187381760;
dp[680]=2043740160;
dp[682]=317016904826880;
dp[684]=4541644800;
dp[686]=5103000000;
dp[688]=4156153952993280;
dp[690]=59454259200;
dp[693]=914457600;
dp[696]=930128855040;
dp[700]=249480000;
dp[702]=496742400;
dp[704]=138378240;
dp[705]=142496706959769600;
dp[714]=8360755200;
dp[715]=151165440000;
dp[720]=61261200;
dp[722]=507799783342080;
dp[725]=13589544960000;
dp[726]=10581580800;
dp[728]=1149603840;
dp[729]=341510400;
dp[735]=1428840000;
dp[736]=43599790080;
dp[738]=1731730813747200;
dp[740]=194819716546560;
dp[741]=3482851737600;
dp[744]=3720515420160;
dp[748]=135444234240;
dp[750]=436590000;
dp[752]=66498463247892480;
dp[754]=713288035860480;
dp[756]=100900800;
dp[759]=6191736422400;
dp[760]=8174960640;
dp[765]=6502809600;
dp[768]=73513440;
dp[770]=3265920000;
dp[774]=6926923254988800;
dp[775]=54358179840000;
dp[777]=1252412463513600;
dp[780]=638668800;
dp[782]=902755170385920;
dp[783]=2959500902400;
dp[784]=233513280;
dp[792]=230630400;
dp[795]=9119789245425254400;
dp[798]=33443020800;
dp[800]=110270160;
dp[805]=1911029760000;
dp[806]=2853152143441920;
dp[810]=277477200;
dp[812]=6849130659840;
dp[814]=20289081908920320;
dp[816]=2952069120;
dp[819]=3657830400;
dp[820]=3117115464744960;
dp[825]=2540160000;
dp[828]=72666316800;
dp[832]=553512960;
dp[833]=746496000000;
dp[836]=541776936960;
dp[837]=11838003609600;
dp[840]=129729600;
dp[845]=1360488960000;
dp[846]=110830772079820800;
dp[847]=944784000000;
dp[848]=4255901647865118720;
dp[850]=23224320000;
dp[855]=26011238400;
dp[858]=42326323200;
dp[860]=12468461858979840;
dp[861]=20038599416217600;
dp[864]=122522400;
dp[867]=70527747686400;
dp[868]=27396522639360;
dp[870]=3805072588800;
dp[874]=8124796533473280;
dp[875]=7779240000;
dp[880]=415134720;
dp[882]=628689600;
dp[884]=1218998108160;
dp[888]=238112986890240;
dp[891]=1366041600;
dp[896]=147026880;
dp[897]=55725627801600;
dp[900]=227026800;
dp[902]=324625310542725120;
dp[903]=80154397664870400;
dp[910]=13063680000;
dp[912]=11808276480;
dp[918]=7947878400;
dp[920]=130799370240;
dp[924]=1437004800;
dp[925]=3478923509760000;
dp[928]=2790386565120;
dp[930]=15220290355200;
dp[931]=2985984000000;
dp[935]=2418647040000;
dp[936]=922521600;
dp[940]=199495389743677440;
dp[945]=768398400;
dp[946]=1298501242170900480;
dp[950]=92897280000;
dp[952]=18393661440;
dp[954]=7093169413108531200;
dp[957]=396271131033600;
dp[960]=183783600;
dp[962]=182601737180282880;
dp[966]=535088332800;
dp[968]=23279477760;
dp[969]=282110990745600;
dp[972]=403603200;
dp[975]=10160640000;
dp[980]=2245320000;
dp[984]=3809807790243840;
dp[986]=57776330904698880;
dp[987]=1282470362637926400;
dp[988]=4875992432640;
dp[990]=1117670400;
dp[992]=11161546260480;
dp[999]=757632231014400;
dp[1000]=810810000;
}
int main()
{
	int n;
	init();
	cin>>n;
	cout<<dp[n]<<endl;
	return 0;	
} 
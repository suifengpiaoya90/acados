/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) res_inc_Jff_fun_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[6] = {2, 1, 0, 2, 0, 1};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[56] = {8, 9, 0, 8, 16, 17, 25, 26, 34, 35, 43, 44, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 1, 0, 1, 2, 3, 4, 5, 6, 7, 3, 0, 1, 2, 3, 4, 5, 6, 7, 5, 0, 1, 2, 3, 4, 5, 6, 7, 7};
#define s2 CASADI_PREFIX(s2)
/* res_inc_Jff_fun */
int res_inc_Jff_fun(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=4.7418203070092001e-02;
  real_t a1=arg[2] ? arg[2][0] : 0;
  real_t a2=(a0*a1);
  real_t a3=4.3480609188306686e-03;
  real_t a4=arg[0] ? arg[0][0] : 0;
  real_t a5=(a3*a4);
  real_t a6=-1.3301284502509770e-03;
  real_t a7=arg[0] ? arg[0][2] : 0;
  real_t a8=(a6*a7);
  a5=(a5+a8);
  a8=6.3131657731156589e-04;
  real_t a9=arg[0] ? arg[0][4] : 0;
  real_t a10=(a8*a9);
  a5=(a5+a10);
  a10=-1.7774904589125704e-04;
  real_t a11=arg[0] ? arg[0][6] : 0;
  real_t a12=(a10*a11);
  a5=(a5+a12);
  a12=arg[1] ? arg[1][7] : 0;
  a5=(a5+a12);
  real_t a13=(a3*a5);
  real_t a14=9.4056695453880370e-03;
  real_t a15=(a14*a4);
  real_t a16=8.1514634639837744e-03;
  real_t a17=(a16*a7);
  a15=(a15+a17);
  a17=-1.3938945908972616e-03;
  real_t a18=(a17*a9);
  a15=(a15+a18);
  a18=3.3676158152544383e-04;
  real_t a19=(a18*a11);
  a15=(a15+a19);
  a15=(a15+a12);
  a19=(a6*a15);
  a13=(a13+a19);
  a19=8.3592487230727958e-03;
  real_t a20=(a19*a4);
  real_t a21=1.7697634286298992e-02;
  real_t a22=(a21*a7);
  a20=(a20+a22);
  a22=8.1522762314179664e-03;
  real_t a23=(a22*a9);
  a20=(a20+a23);
  a23=-7.0965924078978033e-04;
  real_t a24=(a23*a11);
  a20=(a20+a24);
  a20=(a20+a12);
  a24=(a8*a20);
  a13=(a13+a24);
  a24=8.8737593504895195e-03;
  real_t a25=(a24*a4);
  real_t a26=1.5672423118090147e-02;
  real_t a27=(a26*a7);
  a25=(a25+a27);
  a27=1.7633868145652785e-02;
  real_t a28=(a27*a9);
  a25=(a25+a28);
  a28=4.3479493857675943e-03;
  real_t a29=(a28*a11);
  a25=(a25+a29);
  a25=(a25+a12);
  a29=(a10*a25);
  a13=(a13+a29);
  a29=arg[1] ? arg[1][6] : 0;
  a13=(a13+a29);
  real_t a30=cos(a13);
  a30=(a2*a30);
  real_t a31=sin(a13);
  real_t a32=9.8100000000000005e+00;
  a31=(a32*a31);
  a30=(a30+a31);
  a31=4.4627709988163521e-03;
  real_t a33=arg[2] ? arg[2][1] : 0;
  a31=(a31*a33);
  real_t a34=-3.5192207465217756e+01;
  real_t a35=arg[1] ? arg[1][3] : 0;
  a34=(a34*a35);
  real_t a36=1.1996086452618500e+00;
  real_t a37=arg[1] ? arg[1][5] : 0;
  a36=(a36*a37);
  a34=(a34+a36);
  a31=(a31+a34);
  a34=(a3*a31);
  a36=1.6622375163121289e-02;
  a36=(a36*a33);
  real_t a38=-2.0747327210127448e+01;
  a38=(a38*a35);
  real_t a39=7.0722114013291282e-01;
  a39=(a39*a37);
  a38=(a38+a39);
  a36=(a36+a38);
  a38=(a6*a36);
  a34=(a34+a38);
  a38=2.5297146001570944e-02;
  a39=(a38*a33);
  real_t a40=-1.0442219880269137e+01;
  a40=(a40*a35);
  real_t a41=3.5594747094159052e-01;
  a41=(a41*a37);
  a40=(a40+a41);
  a39=(a39+a40);
  a40=(a8*a39);
  a34=(a34+a40);
  a40=2.8916108516548869e-02;
  a40=(a40*a33);
  a41=-6.1431095251826129e+00;
  a41=(a41*a35);
  real_t a42=2.0940224629225002e-01;
  a42=(a42*a37);
  a41=(a41+a42);
  a40=(a40+a41);
  a41=(a10*a40);
  a34=(a34+a41);
  a34=(a34+a35);
  a41=2.;
  a34=(a41*a34);
  a42=(a3*a4);
  real_t a43=(a6*a7);
  a42=(a42+a43);
  a43=(a8*a9);
  a42=(a42+a43);
  a43=(a10*a11);
  a42=(a42+a43);
  a42=(a42+a12);
  a42=(a34*a42);
  a30=(a30+a42);
  a42=8.1252029841895587e-06;
  a42=(a42*a33);
  a43=8.6907833360452302e-01;
  a43=(a43*a35);
  real_t a44=4.4627709988163530e-03;
  a44=(a44*a37);
  a43=(a43+a44);
  a42=(a42+a43);
  a43=(a3*a42);
  a44=1.5194831255728873e-04;
  a44=(a44*a33);
  real_t a45=5.1235923680963613e-01;
  a45=(a45*a35);
  real_t a46=1.6622375163121286e-02;
  a46=(a46*a37);
  a45=(a45+a46);
  a44=(a44+a45);
  a45=(a6*a44);
  a43=(a43+a45);
  a45=5.1719086783466985e-04;
  a45=(a45*a33);
  a46=2.5787262880982148e-01;
  a46=(a46*a35);
  a38=(a38*a37);
  a46=(a46+a38);
  a45=(a45+a46);
  a46=(a8*a45);
  a43=(a43+a46);
  a46=8.7192676598025695e-04;
  a46=(a46*a33);
  a33=1.5170527153127375e-01;
  a33=(a33*a35);
  a38=2.8916108516548866e-02;
  a38=(a38*a37);
  a33=(a33+a38);
  a46=(a46+a33);
  a33=(a10*a46);
  a43=(a43+a33);
  a33=arg[1] ? arg[1][2] : 0;
  a43=(a43+a33);
  a30=(a30/a43);
  a30=(a4+a30);
  if (res[0]!=0) res[0][0]=a30;
  a30=sq(a13);
  a38=8.;
  a30=(a30/a38);
  a37=arg[0] ? arg[0][1] : 0;
  a37=(a37-a30);
  if (res[0]!=0) res[0][1]=a37;
  a37=(a0*a1);
  a30=(a14*a5);
  real_t a47=(a16*a15);
  a30=(a30+a47);
  a47=(a17*a20);
  a30=(a30+a47);
  a47=(a18*a25);
  a30=(a30+a47);
  a30=(a30+a29);
  a47=cos(a30);
  a47=(a37*a47);
  real_t a48=sin(a30);
  a48=(a32*a48);
  a47=(a47+a48);
  a48=(a14*a31);
  real_t a49=(a16*a36);
  a48=(a48+a49);
  a49=(a17*a39);
  a48=(a48+a49);
  a49=(a18*a40);
  a48=(a48+a49);
  a48=(a48+a35);
  a48=(a41*a48);
  a49=(a14*a4);
  real_t a50=(a16*a7);
  a49=(a49+a50);
  a50=(a17*a9);
  a49=(a49+a50);
  a50=(a18*a11);
  a49=(a49+a50);
  a49=(a49+a12);
  a49=(a48*a49);
  a47=(a47+a49);
  a49=(a14*a42);
  a50=(a16*a44);
  a49=(a49+a50);
  a50=(a17*a45);
  a49=(a49+a50);
  a50=(a18*a46);
  a49=(a49+a50);
  a49=(a49+a33);
  a47=(a47/a49);
  a47=(a7+a47);
  if (res[0]!=0) res[0][2]=a47;
  a47=sq(a30);
  a47=(a47/a38);
  a50=arg[0] ? arg[0][3] : 0;
  a50=(a50-a47);
  if (res[0]!=0) res[0][3]=a50;
  a50=(a0*a1);
  a47=(a19*a5);
  real_t a51=(a21*a15);
  a47=(a47+a51);
  a51=(a22*a20);
  a47=(a47+a51);
  a51=(a23*a25);
  a47=(a47+a51);
  a47=(a47+a29);
  a51=cos(a47);
  a51=(a50*a51);
  real_t a52=sin(a47);
  a52=(a32*a52);
  a51=(a51+a52);
  a52=(a19*a31);
  real_t a53=(a21*a36);
  a52=(a52+a53);
  a53=(a22*a39);
  a52=(a52+a53);
  a53=(a23*a40);
  a52=(a52+a53);
  a52=(a52+a35);
  a52=(a41*a52);
  a53=(a19*a4);
  real_t a54=(a21*a7);
  a53=(a53+a54);
  a54=(a22*a9);
  a53=(a53+a54);
  a54=(a23*a11);
  a53=(a53+a54);
  a53=(a53+a12);
  a53=(a52*a53);
  a51=(a51+a53);
  a53=(a19*a42);
  a54=(a21*a44);
  a53=(a53+a54);
  a54=(a22*a45);
  a53=(a53+a54);
  a54=(a23*a46);
  a53=(a53+a54);
  a53=(a53+a33);
  a51=(a51/a53);
  a51=(a9+a51);
  if (res[0]!=0) res[0][4]=a51;
  a51=sq(a47);
  a51=(a51/a38);
  a54=arg[0] ? arg[0][5] : 0;
  a54=(a54-a51);
  if (res[0]!=0) res[0][5]=a54;
  a0=(a0*a1);
  a5=(a24*a5);
  a15=(a26*a15);
  a5=(a5+a15);
  a20=(a27*a20);
  a5=(a5+a20);
  a25=(a28*a25);
  a5=(a5+a25);
  a5=(a5+a29);
  a29=cos(a5);
  a29=(a0*a29);
  a25=sin(a5);
  a25=(a32*a25);
  a29=(a29+a25);
  a31=(a24*a31);
  a36=(a26*a36);
  a31=(a31+a36);
  a39=(a27*a39);
  a31=(a31+a39);
  a40=(a28*a40);
  a31=(a31+a40);
  a31=(a31+a35);
  a41=(a41*a31);
  a4=(a24*a4);
  a7=(a26*a7);
  a4=(a4+a7);
  a9=(a27*a9);
  a4=(a4+a9);
  a9=(a28*a11);
  a4=(a4+a9);
  a4=(a4+a12);
  a4=(a41*a4);
  a29=(a29+a4);
  a42=(a24*a42);
  a44=(a26*a44);
  a42=(a42+a44);
  a45=(a27*a45);
  a42=(a42+a45);
  a46=(a28*a46);
  a42=(a42+a46);
  a42=(a42+a33);
  a29=(a29/a42);
  a11=(a11+a29);
  if (res[0]!=0) res[0][6]=a11;
  a11=sq(a5);
  a11=(a11/a38);
  a38=arg[0] ? arg[0][7] : 0;
  a38=(a38-a11);
  if (res[0]!=0) res[0][7]=a38;
  a38=cos(a13);
  a11=1.0094915132611060e-05;
  a29=(a11*a38);
  a29=(a32*a29);
  a33=sin(a13);
  a46=(a11*a33);
  a46=(a2*a46);
  a29=(a29-a46);
  a3=(a3*a34);
  a29=(a29+a3);
  a29=(a29/a43);
  a3=1.;
  a29=(a3+a29);
  if (res[0]!=0) res[0][8]=a29;
  a13=(a13+a13);
  a11=(a11*a13);
  a29=1.2500000000000000e-01;
  a11=(a29*a11);
  a11=(-a11);
  if (res[0]!=0) res[0][9]=a11;
  a11=cos(a30);
  a46=1.0890282547316402e-04;
  a45=(a46*a11);
  a45=(a32*a45);
  a44=sin(a30);
  a4=(a46*a44);
  a4=(a37*a4);
  a45=(a45-a4);
  a14=(a14*a48);
  a45=(a45+a14);
  a45=(a45/a49);
  if (res[0]!=0) res[0][10]=a45;
  a30=(a30+a30);
  a46=(a46*a30);
  a46=(a29*a46);
  a46=(-a46);
  if (res[0]!=0) res[0][11]=a46;
  a46=cos(a47);
  a45=2.6465418186963325e-04;
  a14=(a45*a46);
  a14=(a32*a14);
  a4=sin(a47);
  a12=(a45*a4);
  a12=(a50*a12);
  a14=(a14-a12);
  a19=(a19*a52);
  a14=(a14+a19);
  a14=(a14/a53);
  if (res[0]!=0) res[0][12]=a14;
  a47=(a47+a47);
  a45=(a45*a47);
  a45=(a29*a45);
  a45=(-a45);
  if (res[0]!=0) res[0][13]=a45;
  a45=cos(a5);
  a14=3.7198182535602009e-04;
  a19=(a14*a45);
  a19=(a32*a19);
  a12=sin(a5);
  a9=(a14*a12);
  a9=(a0*a9);
  a19=(a19-a9);
  a24=(a24*a41);
  a19=(a19+a24);
  a19=(a19/a42);
  if (res[0]!=0) res[0][14]=a19;
  a5=(a5+a5);
  a14=(a14*a5);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][15]=a14;
  if (res[0]!=0) res[0][16]=a3;
  a14=-8.2389213480937809e-06;
  a19=(a14*a38);
  a19=(a32*a19);
  a24=(a14*a33);
  a24=(a2*a24);
  a19=(a19-a24);
  a6=(a6*a34);
  a19=(a19+a6);
  a19=(a19/a43);
  if (res[0]!=0) res[0][17]=a19;
  a14=(a14*a13);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][18]=a14;
  a14=3.4544841240916432e-05;
  a19=(a14*a11);
  a19=(a32*a19);
  a6=(a14*a44);
  a6=(a37*a6);
  a19=(a19-a6);
  a16=(a16*a48);
  a19=(a19+a16);
  a19=(a19/a49);
  a19=(a3+a19);
  if (res[0]!=0) res[0][19]=a19;
  a14=(a14*a30);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][20]=a14;
  a14=2.6629666818763241e-04;
  a19=(a14*a46);
  a19=(a32*a19);
  a16=(a14*a4);
  a16=(a50*a16);
  a19=(a19-a16);
  a21=(a21*a52);
  a19=(a19+a21);
  a19=(a19/a53);
  if (res[0]!=0) res[0][21]=a19;
  a14=(a14*a47);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][22]=a14;
  a14=4.9617059663080996e-04;
  a19=(a14*a45);
  a19=(a32*a19);
  a21=(a14*a12);
  a21=(a0*a21);
  a19=(a19-a21);
  a26=(a26*a41);
  a19=(a19+a26);
  a19=(a19/a42);
  if (res[0]!=0) res[0][23]=a19;
  a14=(a14*a5);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][24]=a14;
  if (res[0]!=0) res[0][25]=a3;
  a14=6.6113256786769639e-06;
  a19=(a14*a38);
  a19=(a32*a19);
  a26=(a14*a33);
  a26=(a2*a26);
  a19=(a19-a26);
  a8=(a8*a34);
  a19=(a19+a8);
  a19=(a19/a43);
  if (res[0]!=0) res[0][26]=a19;
  a14=(a14*a13);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][27]=a14;
  a14=-1.0849330142958267e-05;
  a19=(a14*a11);
  a19=(a32*a19);
  a8=(a14*a44);
  a8=(a37*a8);
  a19=(a19-a8);
  a17=(a17*a48);
  a19=(a19+a17);
  a19=(a19/a49);
  if (res[0]!=0) res[0][28]=a19;
  a14=(a14*a30);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][29]=a14;
  a14=3.4554265862307580e-05;
  a19=(a14*a46);
  a19=(a32*a19);
  a17=(a14*a4);
  a17=(a50*a17);
  a19=(a19-a17);
  a22=(a22*a52);
  a19=(a19+a22);
  a19=(a19/a53);
  a19=(a3+a19);
  if (res[0]!=0) res[0][30]=a19;
  a14=(a14*a47);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][31]=a14;
  a14=2.0418377589483989e-04;
  a19=(a14*a45);
  a19=(a32*a19);
  a22=(a14*a12);
  a22=(a0*a22);
  a19=(a19-a22);
  a27=(a27*a41);
  a19=(a19+a27);
  a19=(a19/a42);
  if (res[0]!=0) res[0][32]=a19;
  a14=(a14*a5);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][33]=a14;
  if (res[0]!=0) res[0][34]=a3;
  a14=-2.4416633381943162e-06;
  a38=(a14*a38);
  a38=(a32*a38);
  a33=(a14*a33);
  a2=(a2*a33);
  a38=(a38-a2);
  a10=(a10*a34);
  a38=(a38+a10);
  a38=(a38/a43);
  if (res[0]!=0) res[0][35]=a38;
  a14=(a14*a13);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][36]=a14;
  a14=3.5266634288776807e-06;
  a11=(a14*a11);
  a11=(a32*a11);
  a44=(a14*a44);
  a37=(a37*a44);
  a11=(a11-a37);
  a18=(a18*a48);
  a11=(a11+a18);
  a11=(a11/a49);
  if (res[0]!=0) res[0][37]=a11;
  a14=(a14*a30);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][38]=a14;
  a14=-4.3968657945737992e-06;
  a46=(a14*a46);
  a46=(a32*a46);
  a4=(a14*a4);
  a50=(a50*a4);
  a46=(a46-a50);
  a23=(a23*a52);
  a46=(a46+a23);
  a46=(a46/a53);
  if (res[0]!=0) res[0][39]=a46;
  a14=(a14*a47);
  a14=(a29*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][40]=a14;
  a14=1.0091194118331585e-05;
  a45=(a14*a45);
  a32=(a32*a45);
  a12=(a14*a12);
  a0=(a0*a12);
  a32=(a32-a0);
  a28=(a28*a41);
  a32=(a32+a28);
  a32=(a32/a42);
  a32=(a3+a32);
  if (res[0]!=0) res[0][41]=a32;
  a14=(a14*a5);
  a29=(a29*a14);
  a29=(-a29);
  if (res[0]!=0) res[0][42]=a29;
  if (res[0]!=0) res[0][43]=a3;
  return 0;
}

void res_inc_Jff_fun_incref(void) {
}

void res_inc_Jff_fun_decref(void) {
}

int res_inc_Jff_fun_n_in(void) { return 3;}

int res_inc_Jff_fun_n_out(void) { return 1;}

const char* res_inc_Jff_fun_name_in(int i){
  switch (i) {
  case 0: return "i0";
  case 1: return "i1";
  case 2: return "i2";
  default: return 0;
  }
}

const char* res_inc_Jff_fun_name_out(int i){
  switch (i) {
  case 0: return "o0";
  default: return 0;
  }
}

const int* res_inc_Jff_fun_sparsity_in(int i) {
  switch (i) {
  case 0: return s0;
  case 1: return s0;
  case 2: return s1;
  default: return 0;
  }
}

const int* res_inc_Jff_fun_sparsity_out(int i) {
  switch (i) {
  case 0: return s2;
  default: return 0;
  }
}

int res_inc_Jff_fun_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 55;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

__int64 __usercall Character::getCenterScreenOffset@<X0>(__int64 this@<X0>, __int64 a2@<X8>)
{
  _BOOL4 v3; // w8
  int v4; // w8
  float v6; // w8
  float v7; // s0
  float v8; // s0
  float v9; // s1
  __int64 v10; // x0
  __int64 v11; // x0
  float v12; // s0
  float v13; // s0
  float v14; // s1
  __int64 v15; // x0
  __int64 v16; // x0
  float v17; // s0
  __int64 v18; // x0
  __int64 v19; // x0
  float v20; // s0
  __int64 v21; // x0
  __int64 v22; // x0
  float v23; // s0
  float v24; // s0
  __int64 Instance; // x0
  __int64 v26; // x0
  float v27; // s0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  float v32; // s0
  __int64 v33; // x0
  float v34; // s8
  __int64 v35; // x0
  float v36; // s0
  float v37; // s0
  __int64 v42; // x0
  __int64 v43; // x0
  float v44; // s1
  float v45; // s0
  int v46; // w8
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  float v51; // s0
  float v52; // s1
  __int64 v53; // x0
  __int64 v54; // x0
  int v55; // w8
  __int64 v56; // x0
  __int64 v57; // x0
  float v58; // s0
  float v59; // s1
  __int64 v60; // x0
  __int64 v61; // x0

  v3 = *(this + 145) != 0 && *(this + 146) == 0; /*0xcce5f4*/
  *a2 = 0; /*0xcce600*/
  switch ( *(this + 12) ) /*0xcce624*/
  {
    case 0: /*0xcce624*/
      _ZF = !v3; /*0xcce640*/
      v6 = 160.0; /*0xcce644*/
      goto LABEL_10; /*0xcce648*/
    case 1: /*0xcce624*/
      _ZF = !v3; /*0xcce64c*/
      v6 = 110.0; /*0xcce650*/
LABEL_10:
      v7 = 0.0; /*0xcce654*/
      goto LABEL_21; /*0xcce658*/
    case 2: /*0xcce624*/
      v24 = 110.0; /*0xcce88c*/
      if ( v3 ) /*0xcce894*/
        v24 = 100.0; /*0xcce894*/
      *a2 = v24; /*0xcce898*/
      v8 = 0.0; /*0xcce89c*/
      if ( !v3 ) /*0xcce8a0*/
        goto LABEL_94; /*0xcce8a0*/
      Instance = cocos2d::Director::getInstance(this); /*0xcce8a4*/
      this = (*(**(Instance + 240) + 176LL))(a1: *(Instance + 240)); /*0xcce8b4*/
      if ( *(this + 4) <= 720.0 /*0xcce8f0*/
        || (v26 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v26 + 240) + 176LL))(a1: *(v26 + 240))) + 4) <= 960.0) )
      {
        v60 = cocos2d::Director::getInstance(this); /*0xccecdc*/
        this = (*(**(v60 + 240) + 176LL))(a1: *(v60 + 240)); /*0xccecec*/
        v27 = 0.0; /*0xcced00*/
        if ( *(this + 4) > 720.0 ) /*0xcced04*/
        {
          v61 = cocos2d::Director::getInstance(this); /*0xcced08*/
          this = (*(**(v61 + 240) + 176LL))(a1: *(v61 + 240)); /*0xcced18*/
          v27 = *(this + 4) + -720.0; /*0xcced28*/
        }
      }
      else
      {
        v27 = 240.0; /*0xcce8f8*/
      }
      v58 = (v27 / -240.0) * 40.0; /*0xcced44*/
      v59 = 50.0; /*0xcced48*/
      goto LABEL_93; /*0xcced48*/
    case 4: /*0xcce624*/
      v8 = 0.0; /*0xcce664*/
      v9 = 110.0; /*0xcce668*/
      if ( v3 ) /*0xcce66c*/
        v9 = 0.0; /*0xcce66c*/
      *a2 = v9; /*0xcce670*/
      if ( !v3 ) /*0xcce674*/
        goto LABEL_94; /*0xcce674*/
      v10 = cocos2d::Director::getInstance(this); /*0xcce678*/
      this = (*(**(v10 + 240) + 176LL))(a1: *(v10 + 240)); /*0xcce688*/
      if ( *(this + 4) <= 720.0 /*0xcce6c4*/
        || (v11 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v11 + 240) + 176LL))(a1: *(v11 + 240))) + 4) <= 960.0) )
      {
        v56 = cocos2d::Director::getInstance(this); /*0xccec70*/
        this = (*(**(v56 + 240) + 176LL))(a1: *(v56 + 240)); /*0xccec80*/
        v12 = 0.0; /*0xccec94*/
        if ( *(this + 4) > 720.0 ) /*0xccec98*/
        {
          v57 = cocos2d::Director::getInstance(this); /*0xccec9c*/
          this = (*(**(v57 + 240) + 176LL))(a1: *(v57 + 240)); /*0xccecac*/
          v12 = *(this + 4) + -720.0; /*0xccecbc*/
        }
      }
      else
      {
        v12 = 240.0; /*0xcce6cc*/
      }
      v58 = (v12 / 240.0) * 0.0; /*0xccecd0*/
      v59 = 20.0; /*0xccecd4*/
LABEL_93:
      v8 = (v58 + v59); /*0xcced4c*/
LABEL_94:
      *(a2 + 4) = v8; /*0xcced58*/
      return this; /*0xcced5c*/
    case 8: /*0xcce624*/
    case 0xF: /*0xcce624*/
    case 0x21: /*0xcce624*/
      v4 = 1119092736; /*0xcce628*/
      goto LABEL_70; /*0xcce62c*/
    case 9: /*0xcce624*/
    case 0x15: /*0xcce624*/
    case 0x17: /*0xcce624*/
      v4 = 1123024896; /*0xcce630*/
      goto LABEL_70; /*0xcce634*/
    case 0xB: /*0xcce624*/
      if ( v3 ) /*0xcce908*/
      {
        v28 = cocos2d::Director::getInstance(this); /*0xcce90c*/
        this = (*(**(v28 + 240) + 176LL))(a1: *(v28 + 240)); /*0xcce91c*/
        if ( *(this + 4) == 720.0 ) /*0xcce930*/
        {
          v29 = cocos2d::Director::getInstance(this); /*0xcce934*/
          this = (*(**(v29 + 240) + 176LL))(a1: *(v29 + 240)); /*0xcce944*/
          if ( *this <= 1280.0 ) /*0xcce96c*/
            v14 = 130.0; /*0xcce96c*/
          else
            v14 = 150.0; /*0xcce96c*/
          v13 = 50.0; /*0xcce970*/
        }
        else
        {
          v14 = 130.0; /*0xcced68*/
          v13 = 50.0; /*0xcced6c*/
        }
      }
      else
      {
        v13 = 0.0; /*0xccec58*/
        v14 = 110.0; /*0xccec5c*/
      }
      goto LABEL_96; /*0xcce974*/
    case 0xC: /*0xcce624*/
      v13 = 0.0; /*0xcce6e0*/
      v14 = 40.0; /*0xcce6e4*/
      if ( v3 ) /*0xcce6ec*/
      {
        v14 = 0.0; /*0xcce6ec*/
        v13 = 50.0; /*0xcce6f0*/
      }
LABEL_96:
      *a2 = v14; /*0xcced70*/
      *(a2 + 4) = v13; /*0xcced70*/
      return this; /*0xcced74*/
    case 0xD: /*0xcce624*/
      _ZF = !v3; /*0xcce6f8*/
      v6 = 110.0; /*0xcce6fc*/
      v7 = 30.0; /*0xcce700*/
LABEL_21:
      if ( _ZF ) /*0xcce708*/
        v7 = v6; /*0xcce708*/
      *a2 = v7; /*0xcce70c*/
      return this; /*0xcce710*/
    case 0xE: /*0xcce624*/
      v4 = 1123680256; /*0xcce978*/
      goto LABEL_70; /*0xcce97c*/
    case 0x12: /*0xcce624*/
      v4 = 1115815936; /*0xcce980*/
      goto LABEL_70; /*0xcce984*/
    case 0x14: /*0xcce624*/
      v4 = 1124204544; /*0xcce988*/
      goto LABEL_70; /*0xcce98c*/
    case 0x18: /*0xcce624*/
    case 0x1C: /*0xcce624*/
      *a2 = 0; /*0xcce638*/
      return this; /*0xcce63c*/
    case 0x1D: /*0xcce624*/
      v4 = 1116471296; /*0xcce714*/
      goto LABEL_70; /*0xcce718*/
    case 0x1E: /*0xcce624*/
      *a2 = 0x42C8000043200000LL; /*0xcce724*/
      return this; /*0xcce728*/
    case 0x23: /*0xcce624*/
      v30 = cocos2d::Director::getInstance(this); /*0xcce990*/
      this = (*(**(v30 + 240) + 176LL))(a1: *(v30 + 240)); /*0xcce9a0*/
      if ( *(this + 4) <= 720.0 /*0xcce9dc*/
        || (v31 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v31 + 240) + 176LL))(a1: *(v31 + 240))) + 4) <= 960.0) )
      {
        v53 = cocos2d::Director::getInstance(this); /*0xccebd0*/
        this = (*(**(v53 + 240) + 176LL))(a1: *(v53 + 240)); /*0xccebe0*/
        v32 = 0.0; /*0xccebf4*/
        if ( *(this + 4) > 720.0 ) /*0xccebf8*/
        {
          v54 = cocos2d::Director::getInstance(this); /*0xccebfc*/
          this = (*(**(v54 + 240) + 176LL))(a1: *(v54 + 240)); /*0xccec0c*/
          v32 = *(this + 4) + -720.0; /*0xccec1c*/
        }
      }
      else
      {
        v32 = 240.0; /*0xcce9e4*/
      }
      v45 = v32 / -240.0; /*0xccec2c*/
      v44 = 50.0; /*0xccec30*/
      *&v46 = 90.0; /*0xccec34*/
      goto LABEL_83; /*0xccec34*/
    case 0x24: /*0xcce624*/
      v15 = cocos2d::Director::getInstance(this); /*0xcce72c*/
      this = (*(**(v15 + 240) + 176LL))(a1: *(v15 + 240)); /*0xcce73c*/
      if ( *(this + 4) <= 720.0 /*0xcce778*/
        || (v16 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v16 + 240) + 176LL))(a1: *(v16 + 240))) + 4) <= 960.0) )
      {
        v42 = cocos2d::Director::getInstance(this); /*0xccea90*/
        this = (*(**(v42 + 240) + 176LL))(a1: *(v42 + 240)); /*0xcceaa0*/
        v17 = 0.0; /*0xcceab4*/
        if ( *(this + 4) > 720.0 ) /*0xcceab8*/
        {
          v43 = cocos2d::Director::getInstance(this); /*0xcceabc*/
          this = (*(**(v43 + 240) + 176LL))(a1: *(v43 + 240)); /*0xcceacc*/
          v17 = *(this + 4) + -720.0; /*0xcceadc*/
        }
      }
      else
      {
        v17 = 240.0; /*0xcce780*/
      }
      v44 = 30.0; /*0xcceae8*/
      v45 = v17 / -240.0; /*0xcceaec*/
      *&v46 = 120.0; /*0xcceaf0*/
      goto LABEL_83; /*0xcceaf4*/
    case 0x25: /*0xcce624*/
      *a2 = 0xC1F0000041F00000LL; /*0xcce790*/
      return this; /*0xcce794*/
    case 0x26: /*0xcce624*/
      v4 = -1041235968; /*0xcce798*/
      goto LABEL_70; /*0xcce79c*/
    case 0x27: /*0xcce624*/
      v18 = cocos2d::Director::getInstance(this); /*0xcce7a0*/
      this = (*(**(v18 + 240) + 176LL))(a1: *(v18 + 240)); /*0xcce7b0*/
      if ( *(this + 4) <= 720.0 /*0xcce7ec*/
        || (v19 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v19 + 240) + 176LL))(a1: *(v19 + 240))) + 4) <= 960.0) )
      {
        v47 = cocos2d::Director::getInstance(this); /*0xcceaf8*/
        this = (*(**(v47 + 240) + 176LL))(a1: *(v47 + 240)); /*0xcceb08*/
        v20 = 0.0; /*0xcceb1c*/
        if ( *(this + 4) > 720.0 ) /*0xcceb20*/
        {
          v48 = cocos2d::Director::getInstance(this); /*0xcceb24*/
          this = (*(**(v48 + 240) + 176LL))(a1: *(v48 + 240)); /*0xcceb34*/
          v20 = *(this + 4) + -720.0; /*0xcceb44*/
        }
      }
      else
      {
        v20 = 240.0; /*0xcce7f4*/
      }
      v45 = v20 / -240.0; /*0xcceb54*/
      v44 = 35.0; /*0xcceb58*/
      *&v46 = 75.0; /*0xcceb5c*/
LABEL_83:
      v51 = v45 * v44; /*0xccec38*/
      v52 = *&v46; /*0xccec3c*/
      goto LABEL_84; /*0xccec3c*/
    case 0x28: /*0xcce624*/
      *a2 = 1121714176; /*0xcce800*/
      v21 = cocos2d::Director::getInstance(this); /*0xcce804*/
      this = (*(**(v21 + 240) + 176LL))(a1: *(v21 + 240)); /*0xcce814*/
      if ( *(this + 4) <= 720.0 /*0xcce850*/
        || (v22 = cocos2d::Director::getInstance(this),
            *((this = (*(**(v22 + 240) + 176LL))(a1: *(v22 + 240))) + 4) <= 960.0) )
      {
        v49 = cocos2d::Director::getInstance(this); /*0xcceb64*/
        this = (*(**(v49 + 240) + 176LL))(a1: *(v49 + 240)); /*0xcceb74*/
        v23 = 0.0; /*0xcceb88*/
        if ( *(this + 4) > 720.0 ) /*0xcceb8c*/
        {
          v50 = cocos2d::Director::getInstance(this); /*0xcceb90*/
          this = (*(**(v50 + 240) + 176LL))(a1: *(v50 + 240)); /*0xcceba0*/
          v23 = *(this + 4) + -720.0; /*0xccebb0*/
        }
      }
      else
      {
        v23 = 240.0; /*0xcce858*/
      }
      v51 = (v23 / -240.0) * 30.0; /*0xccebc4*/
      v52 = 0.0; /*0xccebc8*/
LABEL_84:
      *(a2 + 4) = (v51 + v52); /*0xccec40*/
      return this; /*0xccec50*/
    case 0x2A: /*0xcce624*/
      if ( !v3 ) /*0xcce9ec*/
      {
        *&v55 = 50.0; /*0xccec64*/
        v34 = -20.0; /*0xccec68*/
LABEL_98:
        v36 = *&v55; /*0xcced7c*/
        goto LABEL_99; /*0xcced7c*/
      }
      v33 = cocos2d::Director::getInstance(this); /*0xcce9f0*/
      this = (*(**(v33 + 240) + 176LL))(a1: *(v33 + 240)); /*0xccea00*/
      v34 = 20.0; /*0xccea10*/
      if ( *(this + 4) != 720.0 ) /*0xccea18*/
      {
        *&v55 = 40.0; /*0xcced78*/
        goto LABEL_98; /*0xcced78*/
      }
      v35 = cocos2d::Director::getInstance(this); /*0xccea1c*/
      this = (*(**(v35 + 240) + 176LL))(a1: *(v35 + 240)); /*0xccea2c*/
      v36 = 40.0; /*0xccea48*/
      if ( *this > 1280.0 ) /*0xccea50*/
        v36 = 70.0; /*0xccea50*/
LABEL_99:
      *a2 = v36; /*0xcced80*/
      *(a2 + 4) = v34; /*0xcced80*/
      return this; /*0xcced90*/
    case 0x2B: /*0xcce624*/
      v37 = 110.0; /*0xccea64*/
      if ( v3 ) /*0xccea6c*/
        v37 = 70.0; /*0xccea6c*/
      *a2 = v37; /*0xccea70*/
      return this; /*0xccea74*/
    case 0x2C: /*0xcce624*/
      v4 = 1127481344; /*0xcce860*/
      goto LABEL_70; /*0xcce864*/
    case 0x2D: /*0xcce624*/
      *a2 = 0x41200000C1F00000LL; /*0xcce870*/
      return this; /*0xcce874*/
    case 0x32: /*0xcce624*/
      __asm { FMOV            V0.2S, #-20.0; jumptable 0000000000CCE624 case 50 } /*0xccea78*/
      *a2 = _D0; /*0xccea7c*/
      return this; /*0xccea80*/
    case 0x33: /*0xcce624*/
      v4 = 1101004800; /*0xcce878*/
      goto LABEL_70; /*0xcce87c*/
    case 0x34: /*0xcce624*/
      v4 = 1112014848; /*0xccea84*/
      goto LABEL_70; /*0xccea84*/
    default:
      v4 = 1121714176; /*0xcce900*/
LABEL_70:
      *a2 = v4; /*0xccea88*/
      return this; /*0xccea8c*/
  }
}
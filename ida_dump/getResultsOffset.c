float __usercall Character::getResultsOffset@<S0>(Character *this@<X0>, float result@<S0>, __int64 a3@<X8>)
{
  int v4; // w8
  __int64 Instance; // x0
  float *v6; // x0
  __int64 v7; // x0
  float v8; // s0
  __int64 v9; // x0
  float *v10; // x0
  __int64 v11; // x0
  float v12; // s0
  __int64 v13; // x0
  float *v14; // x0
  __int64 v15; // x0
  float *v16; // x0
  __int64 v17; // x0
  float *v18; // x0
  __int64 v19; // x0
  float v20; // s0
  __int64 v21; // x0
  float *v22; // x0
  __int64 v23; // x0
  float v24; // s0
  __int64 v25; // x0
  float *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  float *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  float *v32; // x0
  __int64 v33; // x0
  float v34; // s1
  float v35; // s0
  __int64 v36; // x0
  float *v37; // x0
  __int64 v38; // x0
  float v39; // s1
  float v40; // s0
  __int64 v41; // x0
  float *v42; // x0
  __int64 v43; // x0
  int v44; // w9
  __int64 v45; // x0
  float *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  float *v49; // x0
  __int64 v50; // x0

  *a3 = 0; /*0xdcc4b4*/
  v4 = *(this + 145); /*0xdcc4bc*/
  if ( *(this + 145) != 0 ) /*0xdcc4c0*/
    v4 = *(this + 146) == 0; /*0xdcc4cc*/
  switch ( *(this + 3) ) /*0xdcc4f0*/
  {
    case 0: /*0xdcc4f0*/
      if ( v4 != 0 ) /*0xdcc4f4*/
      {
        Instance = cocos2d::Director::getInstance(this); /*0xdcc4f8*/
        v6 = (*(**(Instance + 240) + 176LL))(a1: *(Instance + 240)); /*0xdcc508*/
        if ( v6[1] <= 720.0 /*0xdcc544*/
          || (v7 = cocos2d::Director::getInstance(this: v6),
              (v6 = (*(**(v7 + 240) + 176LL))(a1: *(v7 + 240)))[1] <= 960.0) )
        {
          v41 = cocos2d::Director::getInstance(this: v6); /*0xdcc8b0*/
          v42 = (*(**(v41 + 240) + 176LL))(a1: *(v41 + 240)); /*0xdcc8c0*/
          v8 = 0.0; /*0xdcc8d4*/
          if ( v42[1] > 720.0 ) /*0xdcc8d8*/
          {
            v43 = cocos2d::Director::getInstance(this: v42); /*0xdcc8dc*/
            v8 = *((*(**(v43 + 240) + 176LL))(a1: *(v43 + 240)) + 4) + -720.0; /*0xdcc8fc*/
          }
        }
        else
        {
          v8 = 240.0; /*0xdcc54c*/
        }
        v44 = 1117782016; /*0xdcc904*/
        goto LABEL_55; /*0xdcc908*/
      }
      return result; /*0xdcc4f4*/
    case 1: /*0xdcc4f0*/
      if ( v4 != 0 ) /*0xdcc658*/
        *a3 = 1116471296; /*0xdcc660*/
      return result; /*0xdcc664*/
    case 0xB: /*0xdcc4f0*/
      if ( v4 != 0 ) /*0xdcc668*/
      {
        v17 = cocos2d::Director::getInstance(this); /*0xdcc66c*/
        v18 = (*(**(v17 + 240) + 176LL))(a1: *(v17 + 240)); /*0xdcc67c*/
        if ( v18[1] == 720.0 ) /*0xdcc690*/
        {
          v19 = cocos2d::Director::getInstance(this: v18); /*0xdcc694*/
          v18 = (*(**(v19 + 240) + 176LL))(a1: *(v19 + 240)); /*0xdcc6a4*/
          v20 = 20.0; /*0xdcc6bc*/
          if ( *v18 <= 1280.0 ) /*0xdcc6c0*/
            v20 = 0.0; /*0xdcc6c0*/
        }
        else
        {
          v20 = 0.0; /*0xdcc918*/
        }
        *a3 = v20; /*0xdcc91c*/
        v45 = cocos2d::Director::getInstance(this: v18); /*0xdcc920*/
        v46 = (*(**(v45 + 240) + 176LL))(a1: *(v45 + 240)); /*0xdcc930*/
        if ( v46[1] <= 720.0 /*0xdcc96c*/
          || (v47 = cocos2d::Director::getInstance(this: v46),
              (v46 = (*(**(v47 + 240) + 176LL))(a1: *(v47 + 240)))[1] <= 960.0) )
        {
          v48 = cocos2d::Director::getInstance(this: v46); /*0xdcc97c*/
          v49 = (*(**(v48 + 240) + 176LL))(a1: *(v48 + 240)); /*0xdcc98c*/
          v8 = 0.0; /*0xdcc9a0*/
          if ( v49[1] > 720.0 ) /*0xdcc9a4*/
          {
            v50 = cocos2d::Director::getInstance(this: v49); /*0xdcc9a8*/
            v8 = *((*(**(v50 + 240) + 176LL))(a1: *(v50 + 240)) + 4) + -720.0; /*0xdcc9c8*/
          }
        }
        else
        {
          v8 = 240.0; /*0xdcc974*/
        }
        v44 = 1119092736; /*0xdcc9d0*/
LABEL_55:
        v40 = v8 / -240.0; /*0xdcc9d4*/
        v39 = *&v44; /*0xdcc9dc*/
        goto LABEL_56; /*0xdcc9dc*/
      }
      return result; /*0xdcc668*/
    case 0xC: /*0xdcc4f0*/
      if ( v4 != 0 ) /*0xdcc554*/
        *a3 = 1109393408; /*0xdcc55c*/
      return result; /*0xdcc560*/
    case 0x12: /*0xdcc4f0*/
      v9 = cocos2d::Director::getInstance(this); /*0xdcc564*/
      v10 = (*(**(v9 + 240) + 176LL))(a1: *(v9 + 240)); /*0xdcc574*/
      if ( v10[1] <= 720.0 /*0xdcc5b0*/
        || (v11 = cocos2d::Director::getInstance(this: v10),
            (v10 = (*(**(v11 + 240) + 176LL))(a1: *(v11 + 240)))[1] <= 960.0) )
      {
        v31 = cocos2d::Director::getInstance(this: v10); /*0xdcc7e0*/
        v32 = (*(**(v31 + 240) + 176LL))(a1: *(v31 + 240)); /*0xdcc7f0*/
        v12 = 0.0; /*0xdcc804*/
        if ( v32[1] > 720.0 ) /*0xdcc808*/
        {
          v33 = cocos2d::Director::getInstance(this: v32); /*0xdcc80c*/
          v12 = *((*(**(v33 + 240) + 176LL))(a1: *(v33 + 240)) + 4) + -720.0; /*0xdcc82c*/
        }
      }
      else
      {
        v12 = 240.0; /*0xdcc5b8*/
      }
      v34 = 70.0; /*0xdcc840*/
      v35 = (v12 / -240.0) * 70.0; /*0xdcc844*/
      goto LABEL_57; /*0xdcc848*/
    case 0x24: /*0xdcc4f0*/
      *a3 = -1038090240; /*0xdcc5c4*/
      return result; /*0xdcc5c8*/
    case 0x27: /*0xdcc4f0*/
      goto LABEL_37;
    case 0x28: /*0xdcc4f0*/
      v21 = cocos2d::Director::getInstance(this); /*0xdcc6c8*/
      v22 = (*(**(v21 + 240) + 176LL))(a1: *(v21 + 240)); /*0xdcc6d8*/
      if ( v22[1] <= 720.0 /*0xdcc714*/
        || (v23 = cocos2d::Director::getInstance(this: v22),
            (v22 = (*(**(v23 + 240) + 176LL))(a1: *(v23 + 240)))[1] <= 960.0) )
      {
        v36 = cocos2d::Director::getInstance(this: v22); /*0xdcc84c*/
        v37 = (*(**(v36 + 240) + 176LL))(a1: *(v36 + 240)); /*0xdcc85c*/
        v24 = 0.0; /*0xdcc870*/
        if ( v37[1] > 720.0 ) /*0xdcc874*/
        {
          v38 = cocos2d::Director::getInstance(this: v37); /*0xdcc878*/
          v24 = *((*(**(v38 + 240) + 176LL))(a1: *(v38 + 240)) + 4) + -720.0; /*0xdcc898*/
        }
      }
      else
      {
        v24 = 240.0; /*0xdcc71c*/
      }
      v39 = 30.0; /*0xdcc8a4*/
      v40 = v24 / 240.0; /*0xdcc8a8*/
LABEL_56:
      v35 = v40 * v39; /*0xdcc9e0*/
      v34 = 0.0; /*0xdcc9e4*/
LABEL_57:
      result = (v35 + v34); /*0xdcc9e8*/
      *(a3 + 4) = result; /*0xdcc9f4*/
      return result; /*0xdcc9f4*/
    case 0x2A: /*0xdcc4f0*/
      if ( v4 != 0 ) /*0xdcc724*/
      {
        v25 = cocos2d::Director::getInstance(this); /*0xdcc728*/
        v26 = (*(**(v25 + 240) + 176LL))(a1: *(v25 + 240)); /*0xdcc738*/
        result = v26[1]; /*0xdcc73c*/
        if ( result != 720.0 /*0xdcc774*/
          || (v27 = cocos2d::Director::getInstance(this: v26),
              (result = *(*(**(v27 + 240) + 176LL))(a1: *(v27 + 240))) <= 1280.0) )
        {
          *a3 = -1046478848; /*0xdcc77c*/
        }
      }
      return result; /*0xdcc780*/
    case 0x2D: /*0xdcc4f0*/
      v28 = cocos2d::Director::getInstance(this); /*0xdcc784*/
      v29 = (*(**(v28 + 240) + 176LL))(a1: *(v28 + 240)); /*0xdcc794*/
      result = v29[1]; /*0xdcc798*/
      if ( result == 720.0 ) /*0xdcc7a8*/
      {
        v30 = cocos2d::Director::getInstance(this: v29); /*0xdcc7ac*/
        result = *(*(**(v30 + 240) + 176LL))(a1: *(v30 + 240)); /*0xdcc7c0*/
        if ( result > 1280.0 ) /*0xdcc7d0*/
LABEL_37:
          *a3 = 1092616192; /*0xdcc7d4*/
      }
      break; /*0xdcc7dc*/
    case 0x2F: /*0xdcc4f0*/
      *a3 = 1103626240; /*0xdcc5d0*/
      break; /*0xdcc5d4*/
    case 0x33: /*0xdcc4f0*/
      v13 = cocos2d::Director::getInstance(this); /*0xdcc5d8*/
      v14 = (*(**(v13 + 240) + 176LL))(a1: *(v13 + 240)); /*0xdcc5e8*/
      if ( v14[1] == 720.0 ) /*0xdcc5fc*/
      {
        v15 = cocos2d::Director::getInstance(this: v14); /*0xdcc600*/
        v16 = (*(**(v15 + 240) + 176LL))(a1: *(v15 + 240)); /*0xdcc610*/
        result = 20.0; /*0xdcc62c*/
        if ( *v16 > 1280.0 ) /*0xdcc630*/
          result = 40.0; /*0xdcc630*/
        *a3 = result; /*0xdcc634*/
      }
      else
      {
        *a3 = 20.0; /*0xdcc910*/
        result = 20.0; /*0xdcc90c*/
      }
      break; /*0xdcc638*/
    case 0x34: /*0xdcc4f0*/
      *a3 = 1110704128; /*0xdcc640*/
      break; /*0xdcc644*/
    case 0x63: /*0xdcc4f0*/
      *a3 = 0x41F0000042700000LL; /*0xdcc650*/
      result = 60.0; /*0xdcc64c*/
      break; /*0xdcc654*/
    default:
      return result;
  }
  return result; /*0xdcca00*/
}

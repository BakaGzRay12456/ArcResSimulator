__int64 __fastcall GameResultScene::init(GameResultScene *this)
{
  unsigned __int64 StatusReg; // x19
  GameResultScene *v2; // x26
  cocos2d::Director *v3; // x0
  cocos2d::Director *Instance; // x0
  cocos2d::TextureCache *TextureCache; // x0
  __int64 v6; // x0
  CoreManager *v8; // x0
  CoreManager *CharacterManager; // x0
  cocos2d::Director *v10; // x0
  cocos2d::Renderer **v11; // x0
  cocos2d::Director *v12; // x0
  cocos2d::Director *v13; // x20
  __int64 v14; // x0
  float v15; // s8
  float *v16; // x0
  cocos2d::Director *v17; // x0
  __int64 v18; // x0
  int v19; // w8
  FontManager *Node; // x0
  cocos2d::Node *v21; // x1
  __int64 v22; // x0
  cocos2d::Director *v23; // x0
  __int64 v24; // x21
  __int64 v25; // x0
  cocos2d::Director *v26; // x0
  float v27; // s8
  __int64 v28; // x0
  float v29; // s0
  __int64 v30; // x0
  cocos2d::Director *v31; // x0
  cocos2d::Director *v32; // x21
  __int64 v33; // x0
  float v34; // s8
  float *v35; // x0
  __int64 v36; // x0
  int CalculatedClearType; // w8
  AudioManager *v38; // x0
  moFileLib::moFileReaderSingleton *v39; // x0
  __int64 *v40; // x0
  __int64 v41; // x0
  cocos2d::Director *v42; // x0
  cocos2d::Director *v43; // x20
  __int64 v44; // x0
  float *v45; // x0
  __int64 v46; // x0
  moFileLib::moFileReaderSingleton *v47; // x0
  __int64 v48; // x20
  __int64 *v49; // x0
  cocos2d::Director *v50; // x0
  __int64 v51; // x20
  __int64 v52; // x0
  float *v53; // x0
  __int64 v54; // x20
  cocos2d::Director *v55; // x0
  float v56; // s0
  float v57; // s8
  __int64 v58; // x0
  float *v59; // x0
  __int64 v60; // x0
  float v61; // s0
  __int64 v62; // x0
  float *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x20
  cocos2d::Director *v66; // x0
  float v67; // s0
  float v68; // s8
  __int64 v69; // x0
  float *v70; // x0
  __int64 v71; // x0
  float v72; // s0
  __int64 v73; // x0
  float *v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x20
  cocos2d::Director *v79; // x0
  float v80; // s0
  float v81; // s8
  __int64 v82; // x0
  float *v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x20
  cocos2d::Director *v87; // x0
  float v88; // s0
  float v89; // s8
  __int64 v90; // x0
  float *v91; // x0
  unsigned int v92; // w9
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  void (*v96)(void); // x8
  __int64 v97; // x0
  moFileLib::moFileReaderSingleton *v98; // x0
  __int64 v99; // x20
  __int64 *v100; // x0
  __int64 v101; // x20
  cocos2d::Director *v102; // x0
  float v103; // s0
  float v104; // s8
  __int64 v105; // x0
  float *v106; // x0
  __int64 v107; // x0
  float v108; // s0
  __int64 v109; // x0
  float *v110; // x0
  __int64 v111; // x0
  __int64 v112; // x20
  cocos2d::Director *v113; // x0
  float v114; // s0
  float v115; // s8
  __int64 v116; // x0
  float *v117; // x0
  __int64 v118; // x0
  float v119; // s0
  __int64 v120; // x0
  float *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x24
  __int64 v124; // x0
  __int64 v125; // x20
  FontManager *v126; // x0
  cocos2d::Node *v127; // x1
  __int64 v128; // x0
  float32x2_t v129; // d10
  float32x2_t v130; // d11
  __int64 v131; // x21
  float32x2_t v132; // d12
  float v133; // s13
  float v134; // s8
  float v135; // s14
  float v136; // s0
  float32x2_t v137; // d2
  float32x2_t v138; // d1
  float32x2_t v139; // d3
  __int64 v140; // x0
  cocos2d::Node *v141; // x0
  __int64 (*v142)(void); // x8
  cocos2d::Ref *v143; // x0
  cocos2d::Ref *v144; // x20
  void *v145; // x0
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x0
  moFileLib::moFileReaderSingleton *v149; // x0
  __int64 (*v150)(void); // x8
  __int64 v151; // x20
  __int64 *v152; // x0
  const char *v153; // x1
  cocos2d::Ref *GenericLabel; // x20
  __int128 v155; // q2
  __int128 v156; // q0
  __int128 v157; // q1
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x0
  __int64 v161; // x0
  _OWORD *v162; // x0
  __int128 v163; // q1
  char v164; // w9
  __int64 v165; // x9
  __int64 v166; // x8
  unsigned __int64 v167; // x19
  __int64 *v168; // x1
  __int64 v169; // x11
  unsigned __int64 v170; // x10
  unsigned __int64 *v171; // x27
  unsigned __int64 v172; // x10
  __int64 *v173; // x21
  __int64 **v174; // x28
  _QWORD *v175; // x11
  __int64 *v176; // x23
  __int64 *v177; // x0
  __int64 v178; // x8
  int v179; // w19
  __int64 v180; // x9
  __int128 v181; // q0
  __int64 v182; // x9
  __int128 v183; // q0
  __int128 v184; // q0
  __int128 v185; // q1
  __int128 v186; // q0
  __int128 v187; // q1
  __int64 *v188; // x0
  __int64 *v189; // x21
  __int64 v190; // x5
  __int64 *v191; // x0
  __int64 v192; // x0
  moFileLib::moFileReaderSingleton *v193; // x0
  __int64 (*v194)(void); // x8
  unsigned __int64 v195; // x20
  char *v196; // x9
  __int128 v197; // q0
  __int128 v198; // q2
  __int128 v199; // q1
  __int64 v200; // x23
  int v201; // w27
  int v202; // w21
  __int128 v203; // q0
  int v204; // w25
  int ClientClearType; // w0
  __int64 v206; // x19
  int v207; // w24
  CoreManager *v208; // x26
  _QWORD *v209; // x0
  Character **v210; // x8
  Character **v211; // x10
  Character *v212; // x9
  Character *v213; // t1
  __int64 v214; // x0
  __int64 v215; // x0
  __int64 v216; // x0
  __int64 v217; // x26
  char *v218; // x2
  __int64 v219; // x26
  __int64 v220; // x0
  char *v221; // x2
  _QWORD *v222; // x0
  char *v223; // x2
  __int128 v224; // q0
  _QWORD *v225; // x0
  __int128 v226; // q0
  __int64 v227; // x0
  __int64 v228; // x0
  __int64 v229; // x23
  __int64 v230; // x20
  __int64 TopResult; // x21
  __int64 v232; // x20
  int ClearType; // w20
  __int64 v234; // x8
  __int64 v235; // x20
  unsigned int v236; // w0
  CoreManager *v237; // x0
  unsigned int v238; // w2
  __int64 v239; // x21
  __int64 v240; // x20
  __int64 v241; // x22
  __int64 MapWithId; // x22
  char v243; // w3
  std::chrono::steady_clock *v244; // x0
  int v245; // w9
  __int64 OnlineUser; // x20
  cocos2d::Ref *v247; // x21
  cocos2d::Director *v248; // x0
  __int64 v249; // x0
  void (*v250)(void); // x8
  void (*v251)(void); // x8
  char *v252; // x0
  __int64 *v253; // x0
  __int64 v254; // x20
  void (*v255)(void); // x8
  cocos2d::Ref *v256; // x20
  cocos2d::Director *v257; // x0
  __int64 v258; // x0
  float v259; // s0
  cocos2d::Director *v260; // x0
  __int64 v261; // x0
  float *v262; // x0
  cocos2d::DelayTime *v263; // x0
  cocos2d::Action *v264; // x21
  cocos2d::Action *v265; // x0
  cocos2d::ActionInterval *v266; // x1
  cocos2d::Action *v267; // x22
  cocos2d::Action *v268; // x0
  cocos2d::ActionInterval *v269; // x1
  float *v270; // x0
  cocos2d::Action *v271; // x0
  int v272; // w8
  int v273; // w9
  __int64 v274; // x20
  __int64 *v275; // x0
  __int64 v276; // x20
  cocos2d::Director *v277; // x0
  float v278; // s0
  float v279; // s8
  __int64 v280; // x0
  float *v281; // x0
  __int64 v282; // x0
  float v283; // s0
  __int64 v284; // x0
  float *v285; // x0
  __int64 v286; // x0
  __int64 v287; // x20
  cocos2d::Director *v288; // x0
  float v289; // s0
  float v290; // s8
  __int64 v291; // x0
  float *v292; // x0
  __int64 v293; // x0
  float v294; // s0
  __int64 v295; // x0
  float *v296; // x0
  __int64 v297; // x0
  _OWORD v298[2]; // [xsp+0h] [xbp-410h] BYREF
  unsigned __int64 v299; // [xsp+28h] [xbp-3E8h]
  __int128 v300; // [xsp+30h] [xbp-3E0h]
  __int128 v301; // [xsp+40h] [xbp-3D0h]
  unsigned __int64 v302[3]; // [xsp+50h] [xbp-3C0h] BYREF
  unsigned __int64 v303[3]; // [xsp+68h] [xbp-3A8h] BYREF
  unsigned __int64 v304[3]; // [xsp+80h] [xbp-390h] BYREF
  unsigned __int64 v305[3]; // [xsp+98h] [xbp-378h] BYREF
  unsigned __int64 v306[3]; // [xsp+B0h] [xbp-360h] BYREF
  unsigned __int64 v307[3]; // [xsp+C8h] [xbp-348h] BYREF
  unsigned __int64 v308[3]; // [xsp+E0h] [xbp-330h] BYREF
  unsigned __int8 v309; // [xsp+F8h] [xbp-318h] BYREF
  _BYTE v310[23]; // [xsp+F9h] [xbp-317h]
  _QWORD *v311[2]; // [xsp+110h] [xbp-300h] BYREF
  void *v312; // [xsp+120h] [xbp-2F0h]
  void *v313; // [xsp+128h] [xbp-2E8h]
  _BYTE *v314; // [xsp+130h] [xbp-2E0h]
  _OWORD *v315; // [xsp+138h] [xbp-2D8h]
  __int128 v316; // [xsp+140h] [xbp-2D0h] BYREF
  struct _Unwind_Exception *v317; // [xsp+150h] [xbp-2C0h]
  __int128 v318; // [xsp+158h] [xbp-2B8h] BYREF
  void *v319; // [xsp+168h] [xbp-2A8h]
  __int128 v320; // [xsp+170h] [xbp-2A0h] BYREF
  void *v321; // [xsp+180h] [xbp-290h]
  __int128 v322; // [xsp+190h] [xbp-280h] BYREF
  void *v323; // [xsp+1A0h] [xbp-270h]
  _QWORD **v324; // [xsp+1B0h] [xbp-260h] BYREF
  _QWORD *v325[2]; // [xsp+1B8h] [xbp-258h] BYREF
  int v326; // [xsp+1C8h] [xbp-248h]
  _QWORD v327[4]; // [xsp+1D0h] [xbp-240h] BYREF
  _QWORD *v328; // [xsp+1F0h] [xbp-220h]
  __int128 v329; // [xsp+200h] [xbp-210h] BYREF
  struct _Unwind_Exception *v330[2]; // [xsp+210h] [xbp-200h] BYREF
  __int128 v331; // [xsp+220h] [xbp-1F0h]
  char v332; // [xsp+230h] [xbp-1E0h]
  __int128 v333[2]; // [xsp+240h] [xbp-1D0h] BYREF
  __int128 v334; // [xsp+260h] [xbp-1B0h]
  _BYTE v335[148]; // [xsp+270h] [xbp-1A0h] BYREF
  char v336[12]; // [xsp+304h] [xbp-10Ch] BYREF
  _BYTE v337[32]; // [xsp+310h] [xbp-100h] BYREF
  _BYTE v338[39]; // [xsp+330h] [xbp-E0h]
  __int64 v339; // [xsp+358h] [xbp-B8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)); /*0x10efb64*/
  v2 = this; /*0x10efb6c*/
  v339 = *(StatusReg + 40); /*0x10efb70*/
  v3 = cocos2d::Scene::init(this); /*0x10efb74*/
  if ( (v3 & 1) == 0 ) /*0x10efb78*/
    return 0LL; /*0x10efba4*/
  Instance = cocos2d::Director::getInstance(this: v3); /*0x10efb7c*/
  TextureCache = cocos2d::Director::getTextureCache(this: Instance); /*0x10efb80*/
  cocos2d::TextureCache::removeUnusedTextures(this: TextureCache); /*0x10efb84*/
  if ( CoreManager::singleton ) /*0x10efb94*/
    v6 = *(CoreManager::singleton + 64); /*0x10efb98*/
  else
    v6 = 0LL; /*0x10efba8*/
  LOBYTE(a1: v318) = 12; /*0x10efbbc*/
  strcpy(&v318 + 1, "result"); /*0x10efbc4*/
  AnalyticsManager::logScreenEntered(a1: v6, a2: &v318); /*0x10efbd4*/
  v299 = StatusReg; /*0x10efbe0*/
  if ( (v318 & 1) != 0 ) /*0x10efbe4*/
    operator delete(a1: v319); /*0x10efbec*/
  CharacterManager = CoreManager::getCharacterManager(this: v8); /*0x10efbf0*/
  *(v2 + 141) = *(*(CharacterManager + 7) + 132LL); /*0x10efbfc*/
  v10 = CoreManager::getCharacterManager(this: CharacterManager); /*0x10efc00*/
  *(v2 + 280) = *(*(v10 + 7) + 136LL); /*0x10efc0c*/
  v11 = cocos2d::Director::getInstance(this: v10); /*0x10efc10*/
  cocos2d::Director::setDepthTest(this: v11, a2: 0); /*0x10efc18*/
  strcpy(v333, " img/bg_light.jpg"); /*0x10efc2c*/
  v12 = cocos2d::Sprite::create(a1: v333); /*0x10efc3c*/
  v13 = v12; /*0x10efc44*/
  if ( (v333[0] & 1) != 0 ) /*0x10efc48*/
    operator delete(a1: *&v333[1]); /*0x10efc50*/
  v14 = cocos2d::Director::getInstance(this: v12); /*0x10efc54*/
  v15 = *(*(**(v14 + 240) + 176LL))(a1: *(v14 + 240)); /*0x10efc6c*/
  v16 = (*(*v13 + 344LL))(a1: v13); /*0x10efc78*/
  (*(*v13 + 128LL))(a1: v13, a2: v15 / *v16); /*0x10efc90*/
  *&v333[0] = 0x3F80000000000000LL; /*0x10efc9c*/
  v17 = (*(*v13 + 312LL))(a1: v13, a2: v333); /*0x10efcb0*/
  v18 = cocos2d::Director::getInstance(this: v17); /*0x10efcb4*/
  v19 = *((*(**(v18 + 240) + 176LL))(a1: *(v18 + 240)) + 4); /*0x10efcc8*/
  LODWORD(a1: v333[0]) = 0; /*0x10efccc*/
  DWORD1(a1: v333[0]) = v19; /*0x10efcd0*/
  (*(*v13 + 152LL))(a1: v13, a2: v333); /*0x10efce4*/
  (*(*v2 + 504LL))(a1: v2, a2: v13); /*0x10efcf8*/
  *&v333[1] = operator new(a1: 0x20uLL); /*0x10efd1c*/
  v333[0] = xmmword_8A5F00; /*0x10efd20*/
  strcpy(*&v333[1], "layouts/results/Results.csb"); /*0x10efd28*/
  Node = cocos2d::CSLoader::createNode(a1: v333); /*0x10efd34*/
  *(v2 + 99) = Node; /*0x10efd38*/
  if ( (v333[0] & 1) != 0 ) /*0x10efd40*/
  {
    operator delete(a1: *&v333[1]); /*0x10efd48*/
    Node = *(v2 + 99); /*0x10efd4c*/
  }
  FontManager::adjustMultilanguageFontsForChildrenOfNode(this: Node, a2: v21); /*0x10efd50*/
  v22 = *(v2 + 99); /*0x10efd54*/
  *&v333[0] = 0x3F0000003F000000LL; /*0x10efd5c*/
  v23 = (*(*v22 + 312LL))(a1: v22, a2: v333); /*0x10efd6c*/
  v24 = *(v2 + 99); /*0x10efd70*/
  v25 = cocos2d::Director::getInstance(this: v23); /*0x10efd74*/
  v26 = (*(**(v25 + 240) + 176LL))(a1: *(v25 + 240)); /*0x10efd84*/
  v27 = *v26; /*0x10efd88*/
  v28 = cocos2d::Director::getInstance(this: v26); /*0x10efd8c*/
  v29 = *((*(**(v28 + 240) + 176LL))(a1: *(v28 + 240)) + 4); /*0x10efda0*/
  *v333 = v27 * 0.5; /*0x10efdac*/
  *(v333 + 1) = v29 * 0.5; /*0x10efdb4*/
  (*(*v24 + 152LL))(a1: v24, a2: v333); /*0x10efdc8*/
  v30 = *(v2 + 99); /*0x10efdcc*/
  LOBYTE(a1: v333[0]) = 8; /*0x10efdd4*/
  strcpy(v333 + 1, "back"); /*0x10efde0*/
  v31 = (*(*v30 + 544LL))(a1: v30, a2: v333); /*0x10efdf4*/
  v32 = v31; /*0x10efdfc*/
  if ( (v333[0] & 1) != 0 ) /*0x10efe00*/
    operator delete(a1: *&v333[1]); /*0x10efe08*/
  v33 = cocos2d::Director::getInstance(this: v31); /*0x10efe0c*/
  v34 = *(*(**(v33 + 240) + 176LL))(a1: *(v33 + 240)); /*0x10efe24*/
  v35 = (*(*v32 + 344LL))(a1: v32); /*0x10efe30*/
  (*(*v32 + 80LL))(a1: v32, a2: v34 / *v35); /*0x10efe48*/
  if ( CoreManager::singleton ) /*0x10efe50*/
    v36 = *(CoreManager::singleton + 16); /*0x10efe54*/
  else
    v36 = 0LL; /*0x10efe5c*/
  AudioManager::loadSFXSet(a1: v36, a2: 6); /*0x10efe64*/
  CalculatedClearType = GameResult::getCalculatedClearType(this: *(v2 + 98)); /*0x10efe74*/
  if ( CoreManager::singleton ) /*0x10efe78*/
  {
    v38 = *(CoreManager::singleton + 16); /*0x10efe7c*/
    if ( CalculatedClearType ) /*0x10efe80*/
    {
LABEL_19:
      AudioManager::playSystemBGM(this: v38, a2: 4u, a3: 5); /*0x10efe84*/
      goto LABEL_22; /*0x10efe90*/
    }
  }
  else
  {
    v38 = 0LL; /*0x10efe94*/
    if ( CalculatedClearType ) /*0x10efe98*/
      goto LABEL_19; /*0x10efe98*/
  }
  AudioManager::playSystemBGM(this: v38, a2: 6u, a3: 7); /*0x10efea4*/
  (*(*v13 + 1152LL))(a1: v13, a2: 170LL); /*0x10efeb8*/
  v39 = (*(*v32 + 1152LL))(a1: v32, a2: 210LL); /*0x10efecc*/
LABEL_22:
  v40 = moFileLib::moFileReaderSingleton::GetInstance(this: v39); /*0x10efed0*/
  (*(*v40 + 16))(a1: &v316, a2: v40, a3: "Result"); /*0x10efee8*/
  *(v2 + 100) = TopBar::create(a1: &v316, a2: 1, a3: 0, a4: 0LL, a5: 0); /*0x10eff04*/
  if ( (v316 & 1) != 0 ) /*0x10eff0c*/
    operator delete(a1: v317); /*0x10eff14*/
  v41 = *(v2 + 99); /*0x10eff24*/
  LOBYTE(a1: v333[0]) = 20; /*0x10eff30*/
  strcpy(v333 + 1, "nextButton"); /*0x10eff38*/
  v42 = (*(*v41 + 544LL))(a1: v41, a2: v333); /*0x10eff4c*/
  *(v2 + 107) = v42; /*0x10eff50*/
  v43 = v42; /*0x10eff58*/
  if ( (v333[0] & 1) != 0 ) /*0x10eff5c*/
  {
    operator delete(a1: *&v333[1]); /*0x10eff64*/
    v43 = *(v2 + 107); /*0x10eff68*/
  }
  v44 = cocos2d::Director::getInstance(this: v42); /*0x10eff6c*/
  v45 = (*(**(v44 + 240) + 176LL))(a1: *(v44 + 240)); /*0x10eff7c*/
  (*(*v43 + 200LL))(a1: v43, a2: (*v45 + -1280.0) * -0.5); /*0x10effa4*/
  (*(**(v2 + 107) + 1648LL))(a1: *(v2 + 107), a2: 0LL); /*0x10effb8*/
  (*(**(v2 + 107) + 1384LL))(a1: *(v2 + 107), a2: 0LL); /*0x10effcc*/
  v46 = *(v2 + 99); /*0x10effd4*/
  LOBYTE(a1: v333[0]) = 16; /*0x10effd8*/
  strcpy(v333 + 1, "nextText"); /*0x10effec*/
  v47 = (*(*v46 + 544LL))(a1: v46, a2: v333); /*0x10f0000*/
  *(v2 + 108) = v47; /*0x10f0004*/
  v48 = v47; /*0x10f000c*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0010*/
  {
    operator delete(a1: *&v333[1]); /*0x10f0018*/
    v48 = *(v2 + 108); /*0x10f001c*/
  }
  v49 = moFileLib::moFileReaderSingleton::GetInstance(this: v47); /*0x10f0020*/
  (*(*v49 + 16))(a1: v333, a2: v49, a3: "Back"); /*0x10f0038*/
  v50 = cocos2d::ui::Text::setString(a1: v48, a2: v333); /*0x10f0044*/
  if ( (v333[0] & 1) != 0 ) /*0x10f004c*/
    operator delete(a1: *&v333[1]); /*0x10f0054*/
  v51 = *(v2 + 108); /*0x10f0058*/
  v52 = cocos2d::Director::getInstance(this: v50); /*0x10f005c*/
  v53 = (*(**(v52 + 240) + 176LL))(a1: *(v52 + 240)); /*0x10f006c*/
  (*(*v51 + 200LL))(a1: v51, a2: ((*v53 + -1280.0) * -0.5) + 97.0); /*0x10f009c*/
  v54 = *(v2 + 107); /*0x10f00a0*/
  v55 = (*(*v54 + 224LL))(a1: v54); /*0x10f00b0*/
  v57 = v56; /*0x10f00b4*/
  v58 = cocos2d::Director::getInstance(this: v55); /*0x10f00b8*/
  v59 = (*(**(v58 + 240) + 176LL))(a1: *(v58 + 240)); /*0x10f00c8*/
  if ( v59[1] <= 720.0 /*0x10f0104*/
    || (v60 = cocos2d::Director::getInstance(this: v59),
        v59 = (*(**(v60 + 240) + 176LL))(a1: *(v60 + 240)),
        v59[1] <= 960.0) )
  {
    v62 = cocos2d::Director::getInstance(this: v59); /*0x10f0114*/
    v63 = (*(**(v62 + 240) + 176LL))(a1: *(v62 + 240)); /*0x10f0124*/
    v61 = 0.0; /*0x10f0138*/
    if ( v63[1] > 720.0 ) /*0x10f013c*/
    {
      v64 = cocos2d::Director::getInstance(this: v63); /*0x10f0140*/
      v61 = *((*(**(v64 + 240) + 176LL))(a1: *(v64 + 240)) + 4) + -720.0; /*0x10f0160*/
    }
  }
  else
  {
    v61 = 240.0; /*0x10f010c*/
  }
  (*(*v54 + 216LL))(a1: v54, a2: v57 + ((v61 / -240.0) * 120.0)); /*0x10f018c*/
  v65 = *(v2 + 108); /*0x10f0190*/
  v66 = (*(*v65 + 224LL))(a1: v65); /*0x10f01a0*/
  v68 = v67; /*0x10f01a4*/
  v69 = cocos2d::Director::getInstance(this: v66); /*0x10f01a8*/
  v70 = (*(**(v69 + 240) + 176LL))(a1: *(v69 + 240)); /*0x10f01b8*/
  if ( v70[1] <= 720.0 /*0x10f01f4*/
    || (v71 = cocos2d::Director::getInstance(this: v70),
        v70 = (*(**(v71 + 240) + 176LL))(a1: *(v71 + 240)),
        v70[1] <= 960.0) )
  {
    v73 = cocos2d::Director::getInstance(this: v70); /*0x10f0204*/
    v74 = (*(**(v73 + 240) + 176LL))(a1: *(v73 + 240)); /*0x10f0214*/
    v72 = 0.0; /*0x10f0228*/
    if ( v74[1] > 720.0 ) /*0x10f022c*/
    {
      v75 = cocos2d::Director::getInstance(this: v74); /*0x10f0230*/
      v72 = *((*(**(v75 + 240) + 176LL))(a1: *(v75 + 240)) + 4) + -720.0; /*0x10f0250*/
    }
  }
  else
  {
    v72 = 240.0; /*0x10f01fc*/
  }
  (*(*v65 + 216LL))(a1: v65, a2: v68 + ((v72 / -240.0) * 120.0)); /*0x10f027c*/
  v76 = *(v2 + 99); /*0x10f028c*/
  LOBYTE(a1: v333[0]) = 22; /*0x10f029c*/
  strcpy(v333 + 1, "retryButton"); /*0x10f02a4*/
  v77 = (*(*v76 + 544LL))(a1: v76, a2: v333); /*0x10f02b8*/
  *(v2 + 111) = v77; /*0x10f02bc*/
  v78 = v77; /*0x10f02c4*/
  if ( (v333[0] & 1) != 0 ) /*0x10f02c8*/
  {
    operator delete(a1: *&v333[1]); /*0x10f02d0*/
    v78 = *(v2 + 111); /*0x10f02d4*/
  }
  v79 = (*(*v78 + 208LL))(a1: v78); /*0x10f02e4*/
  v81 = v80; /*0x10f02e8*/
  v82 = cocos2d::Director::getInstance(this: v79); /*0x10f02ec*/
  v83 = (*(**(v82 + 240) + 176LL))(a1: *(v82 + 240)); /*0x10f02fc*/
  (*(*v78 + 200LL))(a1: v78, a2: v81 + ((*v83 + -1280.0) * 0.5)); /*0x10f0324*/
  v84 = *(v2 + 99); /*0x10f0334*/
  LOBYTE(a1: v333[0]) = 18; /*0x10f0340*/
  strcpy(v333 + 1, "retryText"); /*0x10f0344*/
  v85 = (*(*v84 + 544LL))(a1: v84, a2: v333); /*0x10f0358*/
  *(v2 + 112) = v85; /*0x10f035c*/
  v86 = v85; /*0x10f0364*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0368*/
  {
    operator delete(a1: *&v333[1]); /*0x10f0370*/
    v86 = *(v2 + 112); /*0x10f0374*/
  }
  v87 = (*(*v86 + 208LL))(a1: v86); /*0x10f0384*/
  v89 = v88; /*0x10f0388*/
  v90 = cocos2d::Director::getInstance(this: v87); /*0x10f038c*/
  v91 = (*(**(v90 + 240) + 176LL))(a1: *(v90 + 240)); /*0x10f039c*/
  (*(*v86 + 200LL))(a1: v86, a2: v89 + ((*v91 + -1280.0) * 0.5)); /*0x10f03c4*/
  (*(**(v2 + 111) + 1384LL))(a1: *(v2 + 111), a2: 0LL); /*0x10f03d8*/
  (*(**(v2 + 111) + 1648LL))(a1: *(v2 + 111), a2: 0LL); /*0x10f03ec*/
  if ( *(v2 + 195) || (v92 = *(v2 + 239), v92 <= 9) && ((1 << v92) & 0x244) != 0 || *(v2 + 976) ) /*0x10f03fc*/
  {
    (*(**(v2 + 111) + 352LL))(a1: *(v2 + 111), a2: 0LL); /*0x10f042c*/
    (*(**(v2 + 112) + 352LL))(a1: *(v2 + 112), a2: 0LL); /*0x10f0440*/
    goto LABEL_48; /*0x10f0440*/
  }
  v192 = *(v2 + 111); /*0x10f1220*/
  *&v333[0] = &off_16E8C20; /*0x10f1230*/
  *(&v333[0] + 1) = v2; /*0x10f1234*/
  *&v334 = v333; /*0x10f1238*/
  cocos2d::ui::Widget::addTouchEventListener(a1: v192, a2: v333); /*0x10f1240*/
  v193 = v334; /*0x10f1244*/
  if ( v333 == v334 ) /*0x10f124c*/
  {
    v194 = *(*v334 + 32LL); /*0x10f20e4*/
    goto LABEL_306; /*0x10f20e4*/
  }
  if ( v334 ) /*0x10f1250*/
  {
    v194 = *(*v334 + 40LL); /*0x10f1258*/
LABEL_306:
    v193 = v194(); /*0x10f20e8*/
  }
  v274 = *(v2 + 112); /*0x10f20ec*/
  v275 = moFileLib::moFileReaderSingleton::GetInstance(this: v193); /*0x10f20f0*/
  (*(*v275 + 16))(a1: v333, a2: v275, a3: " Retry"); /*0x10f2108*/
  cocos2d::ui::Text::setString(a1: v274, a2: v333); /*0x10f2114*/
  if ( (v333[0] & 1) != 0 ) /*0x10f211c*/
    operator delete(a1: *&v333[1]); /*0x10f2124*/
  v276 = *(v2 + 111); /*0x10f2128*/
  v277 = (*(*v276 + 224LL))(a1: v276); /*0x10f2138*/
  v279 = v278; /*0x10f213c*/
  v280 = cocos2d::Director::getInstance(this: v277); /*0x10f2140*/
  v281 = (*(**(v280 + 240) + 176LL))(a1: *(v280 + 240)); /*0x10f2150*/
  if ( v281[1] <= 720.0 /*0x10f218c*/
    || (v282 = cocos2d::Director::getInstance(this: v281),
        v281 = (*(**(v282 + 240) + 176LL))(a1: *(v282 + 240)),
        v281[1] <= 960.0) )
  {
    v284 = cocos2d::Director::getInstance(this: v281); /*0x10f219c*/
    v285 = (*(**(v284 + 240) + 176LL))(a1: *(v284 + 240)); /*0x10f21ac*/
    v283 = 0.0; /*0x10f21c0*/
    if ( v285[1] > 720.0 ) /*0x10f21c4*/
    {
      v286 = cocos2d::Director::getInstance(this: v285); /*0x10f21c8*/
      v283 = *((*(**(v286 + 240) + 176LL))(a1: *(v286 + 240)) + 4) + -720.0; /*0x10f21e8*/
    }
  }
  else
  {
    v283 = 240.0; /*0x10f2194*/
  }
  (*(*v276 + 216LL))(a1: v276, a2: v279 + ((v283 / -240.0) * 120.0)); /*0x10f2214*/
  v287 = *(v2 + 112); /*0x10f2218*/
  v288 = (*(*v287 + 224LL))(a1: v287); /*0x10f2228*/
  v290 = v289; /*0x10f222c*/
  v291 = cocos2d::Director::getInstance(this: v288); /*0x10f2230*/
  v292 = (*(**(v291 + 240) + 176LL))(a1: *(v291 + 240)); /*0x10f2240*/
  if ( v292[1] <= 720.0 /*0x10f227c*/
    || (v293 = cocos2d::Director::getInstance(this: v292),
        v292 = (*(**(v293 + 240) + 176LL))(a1: *(v293 + 240)),
        v292[1] <= 960.0) )
  {
    v295 = cocos2d::Director::getInstance(this: v292); /*0x10f228c*/
    v296 = (*(**(v295 + 240) + 176LL))(a1: *(v295 + 240)); /*0x10f229c*/
    v294 = 0.0; /*0x10f22b0*/
    if ( v296[1] > 720.0 ) /*0x10f22b4*/
    {
      v297 = cocos2d::Director::getInstance(this: v296); /*0x10f22b8*/
      v294 = *((*(**(v297 + 240) + 176LL))(a1: *(v297 + 240)) + 4) + -720.0; /*0x10f22d8*/
    }
  }
  else
  {
    v294 = 240.0; /*0x10f2284*/
  }
  (*(*v287 + 216LL))(a1: v287, a2: v290 + ((v294 / -240.0) * 120.0)); /*0x10f2304*/
LABEL_48:
  v93 = *(v2 + 99); /*0x10f0444*/
  LOBYTE(a1: v333[0]) = 22; /*0x10f0460*/
  strcpy(v333 + 1, "shareButton"); /*0x10f0468*/
  v94 = (*(*v93 + 544LL))(a1: v93, a2: v333); /*0x10f047c*/
  *(v2 + 109) = v94; /*0x10f0480*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0488*/
  {
    operator delete(a1: *&v333[1]); /*0x10f0490*/
    v94 = *(v2 + 109); /*0x10f0494*/
  }
  (*(*v94 + 1648LL))(a1: v94, a2: 0LL); /*0x10f04a4*/
  (*(**(v2 + 109) + 1384LL))(a1: *(v2 + 109), a2: 0LL); /*0x10f04b8*/
  v95 = *(v2 + 109); /*0x10f04bc*/
  *&v333[0] = &off_179DC58; /*0x10f04cc*/
  *&v334 = v333; /*0x10f04d0*/
  cocos2d::ui::Widget::addTouchEventListener(a1: v95, a2: v333); /*0x10f04d8*/
  if ( v333 == v334 ) /*0x10f04e4*/
  {
    v96 = *(*v334 + 32LL); /*0x10f04fc*/
  }
  else
  {
    if ( !v334 ) /*0x10f04e8*/
      goto LABEL_55; /*0x10f04e8*/
    v96 = *(*v334 + 40LL); /*0x10f04f0*/
  }
  v96(); /*0x10f0500*/
LABEL_55:
  v97 = *(v2 + 99); /*0x10f0504*/
  LOBYTE(a1: v333[0]) = 18; /*0x10f051c*/
  strcpy(v333 + 1, "shareText"); /*0x10f0520*/
  v98 = (*(*v97 + 544LL))(a1: v97, a2: v333); /*0x10f0534*/
  *(v2 + 110) = v98; /*0x10f0538*/
  v99 = v98; /*0x10f0540*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0544*/
  {
    operator delete(a1: *&v333[1]); /*0x10f054c*/
    v99 = *(v2 + 110); /*0x10f0550*/
  }
  v100 = moFileLib::moFileReaderSingleton::GetInstance(this: v98); /*0x10f0554*/
  (*(*v100 + 16))(a1: v333, a2: v100, a3: "Share"); /*0x10f056c*/
  cocos2d::ui::Text::setString(a1: v99, a2: v333); /*0x10f0578*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0580*/
    operator delete(a1: *&v333[1]); /*0x10f0588*/
  v101 = *(v2 + 109); /*0x10f058c*/
  v102 = (*(*v101 + 224LL))(a1: v101); /*0x10f059c*/
  v104 = v103; /*0x10f05a0*/
  v105 = cocos2d::Director::getInstance(this: v102); /*0x10f05a4*/
  v106 = (*(**(v105 + 240) + 176LL))(a1: *(v105 + 240)); /*0x10f05b4*/
  if ( v106[1] <= 720.0 /*0x10f05f0*/
    || (v107 = cocos2d::Director::getInstance(this: v106),
        v106 = (*(**(v107 + 240) + 176LL))(a1: *(v107 + 240)),
        v106[1] <= 960.0) )
  {
    v109 = cocos2d::Director::getInstance(this: v106); /*0x10f0600*/
    v110 = (*(**(v109 + 240) + 176LL))(a1: *(v109 + 240)); /*0x10f0610*/
    v108 = 0.0; /*0x10f0624*/
    if ( v110[1] > 720.0 ) /*0x10f0628*/
    {
      v111 = cocos2d::Director::getInstance(this: v110); /*0x10f062c*/
      v108 = *((*(**(v111 + 240) + 176LL))(a1: *(v111 + 240)) + 4) + -720.0; /*0x10f064c*/
    }
  }
  else
  {
    v108 = 240.0; /*0x10f05f8*/
  }
  (*(*v101 + 216LL))(a1: v101, a2: v104 + ((v108 / -240.0) * 120.0)); /*0x10f0678*/
  v112 = *(v2 + 110); /*0x10f067c*/
  v113 = (*(*v112 + 224LL))(a1: v112); /*0x10f068c*/
  v115 = v114; /*0x10f0690*/
  v116 = cocos2d::Director::getInstance(this: v113); /*0x10f0694*/
  v117 = (*(**(v116 + 240) + 176LL))(a1: *(v116 + 240)); /*0x10f06a4*/
  if ( v117[1] <= 720.0 /*0x10f06e0*/
    || (v118 = cocos2d::Director::getInstance(this: v117),
        v117 = (*(**(v118 + 240) + 176LL))(a1: *(v118 + 240)),
        v117[1] <= 960.0) )
  {
    v120 = cocos2d::Director::getInstance(this: v117); /*0x10f06f0*/
    v121 = (*(**(v120 + 240) + 176LL))(a1: *(v120 + 240)); /*0x10f0700*/
    v119 = 0.0; /*0x10f0714*/
    if ( v121[1] > 720.0 ) /*0x10f0718*/
    {
      v122 = cocos2d::Director::getInstance(this: v121); /*0x10f071c*/
      v119 = *((*(**(v122 + 240) + 176LL))(a1: *(v122 + 240)) + 4) + -720.0; /*0x10f073c*/
    }
  }
  else
  {
    v119 = 240.0; /*0x10f06e8*/
  }
  (*(*v112 + 216LL))(a1: v112, a2: v115 + ((v119 / -240.0) * 120.0)); /*0x10f0768*/
  (*(*v2 + 504LL))(a1: v2, a2: *(v2 + 99)); /*0x10f077c*/
  (*(*v2 + 512LL))(a1: v2, a2: *(v2 + 100), a3: 2147483644LL); /*0x10f0794*/
  GameResultScene::setupResultUI(this: v2); /*0x10f079c*/
  if ( !*(v2 + 976) ) /*0x10f07a4*/
    goto LABEL_205; /*0x10f07a4*/
  if ( CoreManager::singleton ) /*0x10f07ac*/
    v123 = *(CoreManager::singleton + 168); /*0x10f07b0*/
  else
    v123 = 0LL; /*0x10f07b8*/
  v124 = *(v2 + 99); /*0x10f07c8*/
  LOBYTE(a1: v333[0]) = 18; /*0x10f07d4*/
  strcpy(v333 + 1, "songImage"); /*0x10f07d8*/
  v125 = (*(*v124 + 544LL))(a1: v124, a2: v333); /*0x10f07f4*/
  if ( (v333[0] & 1) != 0 ) /*0x10f07f8*/
    operator delete(a1: *&v333[1]); /*0x10f0800*/
  (*(*v125 + 344LL))(a1: v125); /*0x10f0810*/
  (*(*v125 + 320LL))(a1: v125); /*0x10f0820*/
  (*(*v125 + 88LL))(a1: v125); /*0x10f0830*/
  (*(*v125 + 344LL))(a1: v125); /*0x10f0840*/
  (*(*v125 + 320LL))(a1: v125); /*0x10f0850*/
  (*(*v125 + 104LL))(a1: v125); /*0x10f0860*/
  *&v333[1] = operator new(a1: 0x40uLL); /*0x10f0888*/
  v333[0] = xmmword_8A7890; /*0x10f0890*/
  strcpy(*&v333[1], "layouts/multiplayer/MultiplayerResultsContent.csb"); /*0x10f0894*/
  v126 = cocos2d::CSLoader::createNode(a1: v333); /*0x10f08a4*/
  *(v2 + 123) = v126; /*0x10f08a8*/
  if ( (v333[0] & 1) != 0 ) /*0x10f08b0*/
  {
    operator delete(a1: *&v333[1]); /*0x10f08b8*/
    v126 = *(v2 + 123); /*0x10f08bc*/
  }
  FontManager::adjustMultilanguageFontsForChildrenOfNode(this: v126, a2: v127); /*0x10f08c0*/
  v128 = *(v2 + 123); /*0x10f08d0*/
  LOBYTE(a1: v333[0]) = 24; /*0x10f08e0*/
  strcpy(v333 + 1, "cover_button"); /*0x10f08e8*/
  *(v2 + 124) = (*(*v128 + 544LL))(a1: v128, a2: v333); /*0x10f0900*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0908*/
    operator delete(a1: *&v333[1]); /*0x10f0910*/
  v129.n64_u64[0] = *(*(**(v2 + 99) + 168LL))(a1: *(v2 + 99)); /*0x10f0928*/
  v130.n64_u64[0] = *(*(*v125 + 168LL))(a1: v125); /*0x10f093c*/
  (*(*v2 + 512LL))(a1: v2, a2: *(v2 + 123), a3: 1LL); /*0x10f0950*/
  v131 = *(v2 + 123); /*0x10f0958*/
  v132.n64_u64[0] = *(*(**(v2 + 99) + 344LL))(a1: *(v2 + 99)); /*0x10f096c*/
  v133 = *(*(*v125 + 344LL))(a1: v125); /*0x10f0980*/
  v134 = COERCE_FLOAT(COERCE_UNSIGNED_INT128((*(*v125 + 88LL))(a1: v125))); /*0x10f0994*/
  v135 = *((*(*v125 + 344LL))(a1: v125) + 4); /*0x10f09a8*/
  v136 = (*(*v125 + 104LL))(a1: v125); /*0x10f09b4*/
  v137.n64_f32[0] = v133 * v134; /*0x10f09c8*/
  v138.n64_u64[0] = vadd_f32(v130, vadd_f32(v129, vmul_f32(v132, 0xBF000000BF000000LL))).n64_u64[0]; /*0x10f09d0*/
  v139.n64_u32[0] = vadd_f32(v138, v137).n64_u32[0]; /*0x10f09d8*/
  v137.n64_f32[1] = v135 * v136; /*0x10f09dc*/
  v139.n64_u32[1] = vsub_f32(v138, v137).n64_u32[1]; /*0x10f09e4*/
  *&v333[0] = vadd_f32(v139, 3253207040LL); /*0x10f09ec*/
  (*(*v131 + 152LL))(a1: v131, a2: v333); /*0x10f0a00*/
  (*(**(v2 + 123) + 128LL))(a1: *(v2 + 123), a2: 1.5); /*0x10f0a14*/
  (*(**(v2 + 123) + 1152LL))(a1: *(v2 + 123), a2: 0LL); /*0x10f0a28*/
  (*(**(v2 + 124) + 1384LL))(a1: *(v2 + 124), a2: 0LL); /*0x10f0a3c*/
  v140 = *(v2 + 124); /*0x10f0a40*/
  *&v333[0] = &off_16B91C8; /*0x10f0a50*/
  *(&v333[0] + 1) = v2; /*0x10f0a54*/
  *&v334 = v333; /*0x10f0a58*/
  cocos2d::ui::Widget::addClickEventListener(a1: v140, a2: v333); /*0x10f0a60*/
  v141 = v334; /*0x10f0a64*/
  if ( v333 == v334 ) /*0x10f0a6c*/
  {
    v142 = *(*v334 + 32LL); /*0x10f0a84*/
  }
  else
  {
    if ( !v334 ) /*0x10f0a70*/
      goto LABEL_84; /*0x10f0a70*/
    v142 = *(*v334 + 40LL); /*0x10f0a78*/
  }
  v141 = v142(); /*0x10f0a88*/
LABEL_84:
  v143 = cocos2d::Node::create(this: v141); /*0x10f0a8c*/
  *(v2 + 138) = v143; /*0x10f0a90*/
  (*(*v143 + 1176LL))(a1: v143, a2: 1LL); /*0x10f0aa0*/
  (*(*v2 + 512LL))(a1: v2, a2: *(v2 + 138), a3: 1LL); /*0x10f0ab8*/
  *&v333[1] = operator new(a1: 0x30uLL); /*0x10f0adc*/
  v301 = xmmword_8A5CC0; /*0x10f0ae0*/
  v333[0] = xmmword_8A5CC0; /*0x10f0ae4*/
  strcpy(*&v333[1], "img/multiplayer/btn-back-onlinealt-backing.png"); /*0x10f0aec*/
  v144 = cocos2d::Sprite::create(a1: v333); /*0x10f0b00*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0b04*/
    operator delete(a1: *&v333[1]); /*0x10f0b0c*/
  *&v333[0] = 0LL; /*0x10f0b10*/
  (*(*v144 + 312LL))(a1: v144, a2: v333); /*0x10f0b24*/
  (*(**(v2 + 138) + 504LL))(a1: *(v2 + 138), a2: v144); /*0x10f0b38*/
  *&v333[1] = operator new(a1: 0x30uLL); /*0x10f0b5c*/
  v300 = xmmword_8A6640; /*0x10f0b60*/
  v333[0] = xmmword_8A6640; /*0x10f0b64*/
  qmemcpy(v298, "btn-back-onlineaimg/multiplayer/", sizeof(v298)); /*0x10f0b6c*/
  strcpy(*&v333[1], "img/multiplayer/btn-back-onlinealt.png"); /*0x10f0b70*/
  *&v337[16] = operator new(a1: 0x30uLL); /*0x10f0b94*/
  strcpy(*&v337[16], "img/multiplayer/btn-back-onlinealt-pressed.png"); /*0x10f0b9c*/
  *v337 = v301; /*0x10f0ba0*/
  v145 = operator new(a1: 0x30uLL); /*0x10f0bac*/
  v330[0] = v145; /*0x10f0bb8*/
  strcpy(v145 + 30, "ealt.png"); /*0x10f0bbc*/
  v329 = xmmword_8A6640; /*0x10f0bc0*/
  *v145 = v298[1]; /*0x10f0bcc*/
  *(v145 + 1) = v298[0]; /*0x10f0bcc*/
  *(v2 + 139) = cocos2d::ui::Button::create(a1: v333, a2: v337, a3: &v329, a4: 0); /*0x10f0be4*/
  if ( (v329 & 1) != 0 ) /*0x10f0bec*/
  {
    operator delete(a1: v330[0]); /*0x10f0c9c*/
    if ( (v337[0] & 1) == 0 ) /*0x10f0ca4*/
    {
LABEL_88:
      if ( (v333[0] & 1) == 0 ) /*0x10f0bfc*/
        goto LABEL_90; /*0x10f0bfc*/
      goto LABEL_89; /*0x10f0bfc*/
    }
  }
  else if ( (v337[0] & 1) == 0 ) /*0x10f0bf4*/
  {
    goto LABEL_88; /*0x10f0bf4*/
  }
  operator delete(a1: *&v337[16]); /*0x10f0cac*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0cb4*/
LABEL_89:
    operator delete(a1: *&v333[1]); /*0x10f0c00*/
LABEL_90:
  v146 = *(v2 + 139); /*0x10f0c08*/
  *&v333[0] = 0LL; /*0x10f0c0c*/
  (*(*v146 + 312LL))(a1: v146, a2: v333); /*0x10f0c1c*/
  v147 = *(v2 + 139); /*0x10f0c28*/
  *&v333[0] = 0x4198000000000000LL; /*0x10f0c2c*/
  (*(*v147 + 152LL))(a1: v147, a2: v333); /*0x10f0c3c*/
  (*(**(v2 + 138) + 512LL))(a1: *(v2 + 138), a2: *(v2 + 139), a3: 1LL); /*0x10f0c54*/
  v148 = *(v2 + 139); /*0x10f0c58*/
  *&v333[0] = &off_17A3860; /*0x10f0c68*/
  *(&v333[0] + 1) = v2; /*0x10f0c6c*/
  *&v334 = v333; /*0x10f0c70*/
  cocos2d::ui::Widget::addTouchEventListener(a1: v148, a2: v333); /*0x10f0c78*/
  v149 = v334; /*0x10f0c7c*/
  if ( v333 == v334 ) /*0x10f0c84*/
  {
    v150 = *(*v334 + 32LL); /*0x10f0cc0*/
  }
  else
  {
    if ( !v334 ) /*0x10f0c88*/
      goto LABEL_98; /*0x10f0c88*/
    v150 = *(*v334 + 40LL); /*0x10f0c90*/
  }
  v149 = v150(); /*0x10f0cc4*/
LABEL_98:
  if ( CoreManager::singleton ) /*0x10f0ccc*/
    v151 = *(CoreManager::singleton + 24); /*0x10f0cd0*/
  else
    v151 = 0LL; /*0x10f0cd8*/
  v152 = moFileLib::moFileReaderSingleton::GetInstance(this: v149); /*0x10f0cdc*/
  (*(*v152 + 16))(a1: v333, a2: v152, a3: "Continue"); /*0x10f0cf8*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0d0c*/
    v153 = *&v333[1]; /*0x10f0d0c*/
  else
    v153 = v333 + 1; /*0x10f0d0c*/
  GenericLabel = FontManager::createGenericLabel(a1: v151, a2: v153, a3: 20, a4: 2, a5: 0, a6: 0); /*0x10f0d2c*/
  if ( (v333[0] & 1) != 0 ) /*0x10f0d30*/
    operator delete(a1: *&v333[1]); /*0x10f0d38*/
  (*(*GenericLabel + 1408LL))(a1: GenericLabel, a2: &cocos2d::Color4B::WHITE); /*0x10f0d50*/
  *&v333[0] = 0x3F0000003F000000LL; /*0x10f0d58*/
  (*(*GenericLabel + 312LL))(a1: GenericLabel, a2: v333); /*0x10f0d6c*/
  *&v333[0] = 0x4228000042B80000LL; /*0x10f0d78*/
  (*(*GenericLabel + 152LL))(a1: GenericLabel, a2: v333); /*0x10f0d8c*/
  (*(**(v2 + 138) + 512LL))(a1: *(v2 + 138), a2: GenericLabel, a3: 1LL); /*0x10f0da4*/
  (*(**(v2 + 138) + 1152LL))(a1: *(v2 + 138), a2: 0LL); /*0x10f0db8*/
  (*(**(v2 + 139) + 1384LL))(a1: *(v2 + 139), a2: 0LL); /*0x10f0dcc*/
  (*(**(v2 + 107) + 1152LL))(a1: *(v2 + 107), a2: 0LL); /*0x10f0de0*/
  (*(**(v2 + 107) + 1384LL))(a1: *(v2 + 107), a2: 0LL); /*0x10f0df4*/
  (*(**(v2 + 108) + 1152LL))(a1: *(v2 + 108), a2: 0LL); /*0x10f0e08*/
  if ( *(v123 + 8) ) /*0x10f0e0c*/
  {
    v155 = *(v123 + 832); /*0x10f0e14*/
    *v337 = *(v123 + 816); /*0x10f0e20*/
    *&v337[16] = v155; /*0x10f0e20*/
    v157 = *(v123 + 848); /*0x10f0e28*/
    v156 = *(v123 + 864); /*0x10f0e28*/
    *&v338[31] = *(v123 + 879); /*0x10f0e2c*/
    *v338 = v157; /*0x10f0e30*/
    *&v338[16] = v156; /*0x10f0e30*/
  }
  v158 = *(v2 + 123); /*0x10f0e40*/
  LOBYTE(a1: v329) = 20; /*0x10f0e50*/
  *(&v329 + 9) = 12639; /*0x10f0e54*/
  *(&v329 + 1) = *"position_1"; /*0x10f0e58*/
  BYTE11(a1: v329) = 0; /*0x10f0e5c*/
  *&v333[0] = (*(*v158 + 544LL))(a1: v158, a2: &v329); /*0x10f0e78*/
  v159 = *(v2 + 123); /*0x10f0e80*/
  LOBYTE(a1: v322) = 20; /*0x10f0e88*/
  *(&v322 + 9) = 12895; /*0x10f0e8c*/
  *(&v322 + 1) = *"position_2"; /*0x10f0e90*/
  BYTE11(a1: v322) = 0; /*0x10f0e94*/
  *(&v333[0] + 1) = (*(*v159 + 544LL))(a1: v159, a2: &v322); /*0x10f0eb0*/
  v160 = *(v2 + 123); /*0x10f0eb8*/
  LOBYTE(a1: v320) = 20; /*0x10f0ec4*/
  *(&v320 + 9) = 13151; /*0x10f0ec8*/
  *(&v320 + 1) = *"position_3"; /*0x10f0ecc*/
  BYTE11(a1: v320) = 0; /*0x10f0ed0*/
  *&v333[1] = (*(*v160 + 544LL))(a1: v160, a2: &v320); /*0x10f0eec*/
  v161 = *(v2 + 123); /*0x10f0ef4*/
  LOBYTE(a1: v311[0]) = 20; /*0x10f0efc*/
  strcpy(v311 + 1, "position_4"); /*0x10f0f04*/
  *(&v333[1] + 1) = (*(*v161 + 544LL))(a1: v161, a2: v311); /*0x10f0f1c*/
  v314 = 0LL; /*0x10f0f20*/
  v315 = 0LL; /*0x10f0f20*/
  v313 = 0LL; /*0x10f0f24*/
  v162 = operator new(a1: 0x20uLL); /*0x10f0f2c*/
  v163 = v333[1]; /*0x10f0f30*/
  v164 = v311[0]; /*0x10f0f34*/
  v314 = v162 + 2; /*0x10f0f3c*/
  v315 = v162 + 2; /*0x10f0f3c*/
  *v162 = v333[0]; /*0x10f0f40*/
  v162[1] = v163; /*0x10f0f40*/
  v313 = v162; /*0x10f0f44*/
  if ( (v164 & 1) != 0 ) /*0x10f0f48*/
  {
    operator delete(a1: v312); /*0x10f11cc*/
    if ( (v320 & 1) == 0 ) /*0x10f11d4*/
    {
LABEL_110:
      if ( (v322 & 1) == 0 ) /*0x10f0f58*/
        goto LABEL_111; /*0x10f0f58*/
LABEL_141:
      operator delete(a1: v323); /*0x10f11e8*/
      if ( (v329 & 1) == 0 ) /*0x10f11f4*/
        goto LABEL_113; /*0x10f11f4*/
      goto LABEL_112; /*0x10f11f4*/
    }
  }
  else if ( (v320 & 1) == 0 ) /*0x10f0f50*/
  {
    goto LABEL_110; /*0x10f0f50*/
  }
  operator delete(a1: v321); /*0x10f11dc*/
  if ( (v322 & 1) != 0 ) /*0x10f11e4*/
    goto LABEL_141; /*0x10f11e4*/
LABEL_111:
  if ( (v329 & 1) != 0 ) /*0x10f0f60*/
LABEL_112:
    operator delete(a1: v330[0]); /*0x10f0f64*/
LABEL_113:
  v311[1] = 0LL; /*0x10f0f6c*/
  v312 = 0LL; /*0x10f0f7c*/
  v334 = 0u; /*0x10f0f90*/
  memset(v335, 0, sizeof(v335)); /*0x10f0f90*/
  memset(v333, 0, sizeof(v333)); /*0x10f0f94*/
  v311[0] = &v311[1]; /*0x10f0f98*/
  v165 = *(v2 + 127); /*0x10f0f9c*/
  v166 = *(v2 + 126); /*0x10f0fa0*/
  *&v300 = v2; /*0x10f0fa8*/
  *&v301 = v2 + 1008; /*0x10f0fac*/
  if ( v165 == v166 ) /*0x10f0fb4*/
    goto LABEL_321; /*0x10f0fb4*/
  v167 = 0LL; /*0x10f0fc0*/
  do /*0x10f1014*/
  {
    v171 = (v166 + 40 * v167); /*0x10f1018*/
    v172 = *v171; /*0x10f101c*/
    if ( *v171 ) /*0x10f101c*/
    {
      v173 = v311[1]; /*0x10f1024*/
      if ( v311[1] ) /*0x10f1028*/
      {
        v174 = &v311[1]; /*0x10f102c*/
        while ( 1 ) /*0x10f1038*/
        {
          while ( 1 ) /*0x10f1030*/
          {
            v175 = v173[4]; /*0x10f1030*/
            if ( v172 < v175 ) /*0x10f1038*/
              break; /*0x10f1038*/
            if ( v175 >= v172 ) /*0x10f1054*/
              goto LABEL_129; /*0x10f1054*/
            v174 = (v173 + 1); /*0x10f105c*/
            if ( !v173[1] ) /*0x10f105c*/
              goto LABEL_129; /*0x10f1060*/
            v173 = v173[1]; /*0x10f1064*/
          }
          if ( !*v173 ) /*0x10f103c*/
            break; /*0x10f103c*/
          v174 = v173; /*0x10f1044*/
          v173 = *v173; /*0x10f1048*/
        }
        v174 = v173; /*0x10f10b0*/
      }
      else
      {
        v173 = &v311[1]; /*0x10f106c*/
        v174 = &v311[1]; /*0x10f1070*/
LABEL_129:
        v176 = *v174; /*0x10f1074*/
        if ( *v174 ) /*0x10f1074*/
          goto LABEL_117; /*0x10f1078*/
      }
      v177 = operator new(a1: 0x30uLL); /*0x10f1080*/
      v178 = *v171; /*0x10f1084*/
      *v177 = 0LL; /*0x10f1088*/
      v177[1] = 0LL; /*0x10f1088*/
      v177[2] = v173; /*0x10f108c*/
      v176 = v177; /*0x10f1090*/
      v177[4] = v178; /*0x10f1094*/
      v177[5] = 0LL; /*0x10f1094*/
      *v174 = v177; /*0x10f1098*/
      if ( *v311[0] ) /*0x10f10a0*/
      {
        v311[0] = *v311[0]; /*0x10f0fd4*/
        v168 = *v174; /*0x10f0fd8*/
      }
      else
      {
        v168 = v177; /*0x10f10a8*/
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void *> *>(result: v311[1], a2: v168); /*0x10f0fe0*/
      v312 = v312 + 1; /*0x10f0fec*/
      v165 = *(v300 + 1016); /*0x10f0ff4*/
      v166 = *(v300 + 1008); /*0x10f0ff8*/
LABEL_117:
      v176[5] = v167; /*0x10f0ffc*/
    }
    v169 = v165 - v166; /*0x10f1000*/
    ++v167; /*0x10f1008*/
    v170 = 0xCCCCCCCCCCCCCCCDLL * ((v165 - v166) >> 3); /*0x10f100c*/
  }
  while ( v167 < v170 ); /*0x10f1014*/
  if ( !v169 ) /*0x10f10c0*/
LABEL_321:
    std::__vector_base_common<true>::__throw_out_of_range(); /*0x10f2318*/
  v179 = *(v123 + 128); /*0x10f10c4*/
  v180 = *(v166 + 32); /*0x10f10c8*/
  v181 = *(v166 + 16); /*0x10f10cc*/
  v2 = v300; /*0x10f10d8*/
  v333[0] = *v166; /*0x10f10e4*/
  v333[1] = v181; /*0x10f10e4*/
  v335[0] = v338[8]; /*0x10f10e8*/
  *&v334 = v180; /*0x10f10ec*/
  *(&v334 + 1) = *v338; /*0x10f10f0*/
  if ( v170 <= 1 ) /*0x10f10f4*/
    std::__vector_base_common<true>::__throw_out_of_range(); /*0x10f2324*/
  v182 = *(v166 + 72); /*0x10f10fc*/
  v183 = *(v166 + 56); /*0x10f1100*/
  *&v335[1] = *(v166 + 40); /*0x10f1114*/
  *&v335[17] = v183; /*0x10f1118*/
  *&v335[33] = v182; /*0x10f111c*/
  v335[49] = v338[17]; /*0x10f1120*/
  *&v335[41] = *&v338[9]; /*0x10f1124*/
  if ( v169 == 80 ) /*0x10f1128*/
    std::__vector_base_common<true>::__throw_out_of_range(); /*0x10f232c*/
  v184 = *(v166 + 80); /*0x10f1130*/
  v185 = *(v166 + 96); /*0x10f1130*/
  *&v335[82] = *(v166 + 112); /*0x10f1140*/
  *&v335[66] = v185; /*0x10f1148*/
  *&v335[50] = v184; /*0x10f114c*/
  *&v335[90] = *&v338[18]; /*0x10f1150*/
  v335[98] = v338[26]; /*0x10f1154*/
  if ( v170 <= 3 ) /*0x10f1158*/
    std::__vector_base_common<true>::__throw_out_of_range(); /*0x10f2334*/
  v186 = *(v166 + 120); /*0x10f115c*/
  v187 = *(v166 + 136); /*0x10f1160*/
  *&v335[131] = *(v166 + 152); /*0x10f1174*/
  v324 = v325; /*0x10f1180*/
  v325[0] = 0LL; /*0x10f1180*/
  *&v335[139] = *&v338[27]; /*0x10f1184*/
  *&v335[115] = v187; /*0x10f1188*/
  *&v335[99] = v186; /*0x10f118c*/
  v335[147] = v338[35]; /*0x10f1190*/
  v325[1] = 0LL; /*0x10f1194*/
  std::map<unsigned long,unsigned long>::insert<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<unsigned long,unsigned long>,std::__tree_node<std::__value_type<unsigned long,unsigned long>,void *> *,long>>>( /*0x10f11a0*/
    result: &v324,
    a2: v311[0],
    a3: &v311[1]);
  v326 = v179; /*0x10f11a4*/
  v188 = operator new(a1: 0xC4uLL, a2: &std::nothrow); /*0x10f11b4*/
  if ( v188 ) /*0x10f11b8*/
  {
    v189 = v188; /*0x10f11bc*/
    v190 = 4LL; /*0x10f11c0*/
  }
  else
  {
    v191 = operator new(a1: 0x62uLL, a2: &std::nothrow); /*0x10f1208*/
    if ( v191 ) /*0x10f120c*/
    {
      v189 = v191; /*0x10f1210*/
      v190 = 2LL; /*0x10f1214*/
    }
    else
    {
      v189 = operator new(a1: 0x31uLL, a2: &std::nothrow); /*0x10f1270*/
      v190 = v189 != 0LL; /*0x10f1274*/
    }
  }
  sub_1557024(a1: v333, a2: v336, a3: &v324, a4: 4uLL, a5: v189, a6: v190); /*0x10f1298*/
  if ( v189 ) /*0x10f129c*/
    operator delete(a1: v189); /*0x10f12a4*/
  std::__tree<std::__value_type<unsigned long,unsigned long>,std::__map_value_compare<unsigned long,std::__value_type<unsigned long,unsigned long>,std::less<unsigned long>,true>,std::allocator<std::__value_type<unsigned long,unsigned long>>>::destroy( /*0x10f12b0*/
    a1: &v324,
    a2: v325[0]);
  v195 = 0LL; /*0x10f12c0*/
  *&v301 = &v330[1]; /*0x10f12d4*/
  do /*0x10f12ec*/
  {
    v196 = v333 + 49 * v195; /*0x10f12f8*/
    v198 = *(v196 + 1); /*0x10f1300*/
    v197 = *(v196 + 2); /*0x10f1300*/
    v199 = *v196; /*0x10f1308*/
    v332 = v196[48]; /*0x10f1314*/
    *v330 = v198; /*0x10f1318*/
    v331 = v197; /*0x10f1318*/
    v329 = v199; /*0x10f131c*/
    if ( v195 >= (v314 - v313) >> 3 ) /*0x10f1320*/
      std::__vector_base_common<true>::__throw_out_of_range(); /*0x10f2310*/
    v200 = *(v313 + v195); /*0x10f1324*/
    v201 = SBYTE8(a1: v329); /*0x10f132c*/
    v202 = BYTE9(a1: v329); /*0x10f1330*/
    v203 = *v301; /*0x10f1338*/
    v204 = *(&v331 + 10); /*0x10f1340*/
    v309 = 32; /*0x10f1348*/
    *v310 = v203; /*0x10f134c*/
    v310[16] = 0; /*0x10f1350*/
    ClientClearType = MultiplayerHelper::getClientClearType(a1: SBYTE14(a1: v331)); /*0x10f1354*/
    v206 = v329; /*0x10f1358*/
    if ( v329 ) /*0x10f135c*/
    {
      LOBYTE(a1: v322) = 18; /*0x10f1370*/
      *(&v322 + 9) = 110; /*0x10f1378*/
      *(&v322 + 1) = *"char_icon"; /*0x10f137c*/
      v207 = ClientClearType; /*0x10f1388*/
      v208 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f139c*/
      v209 = CoreManager::getCharacterManager(this: v208); /*0x10f13a0*/
      v210 = v209[4]; /*0x10f13a4*/
      v211 = v209[5]; /*0x10f13a4*/
      if ( v210 == v211 ) /*0x10f13ac*/
      {
LABEL_160:
        v212 = v209[8]; /*0x10f13c8*/
      }
      else
      {
        while ( 1 ) /*0x10f13b0*/
        {
          v213 = *v210++; /*0x10f13b0*/
          v212 = v213; /*0x10f13b0*/
          if ( *(v213 + 3) == v201 ) /*0x10f13bc*/
            break; /*0x10f13bc*/
          if ( v211 == v210 ) /*0x10f13c4*/
            goto LABEL_160; /*0x10f13c4*/
        }
      }
      Character::getIconFilename(this: v212, a2: 1, a3: v202 != 0, a4: &v320); /*0x10f13e0*/
      (*(*v208 + 1320LL))(a1: v208, a2: &v320); /*0x10f13f4*/
      if ( (v320 & 1) != 0 ) /*0x10f1408*/
        operator delete(a1: v321); /*0x10f1410*/
      if ( (v322 & 1) != 0 ) /*0x10f1418*/
        operator delete(a1: v323); /*0x10f1420*/
      LOBYTE(a1: v322) = 8; /*0x10f1428*/
      *(&v322 + 1) = 1701667182; /*0x10f142c*/
      BYTE5(a1: v322) = 0; /*0x10f1430*/
      v214 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f1444*/
      cocos2d::ui::Text::setString(a1: v214, a2: &v309); /*0x10f144c*/
      if ( (v322 & 1) != 0 ) /*0x10f1454*/
        operator delete(a1: v323); /*0x10f145c*/
      LOBYTE(a1: v322) = 8; /*0x10f1464*/
      *(&v322 + 1) = 1701667182; /*0x10f1468*/
      BYTE5(a1: v322) = 0; /*0x10f146c*/
      v215 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f1480*/
      v216 = (*(*v215 + 1520LL))(a1: v215); /*0x10f148c*/
      cocos2d::Label::setAdditionalKerning(this: v216, a2: 5.0); /*0x10f1494*/
      if ( (v322 & 1) != 0 ) /*0x10f149c*/
        operator delete(a1: v323); /*0x10f14a4*/
      strcpy(&v322, "\nscore"); /*0x10f14ac*/
      v217 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f14dc*/
      GameResult::scoreStringForInt(this: v204, a2: v218, a3: &v320); /*0x10f14e8*/
      cocos2d::ui::Text::setString(a1: v217, a2: &v320); /*0x10f14f4*/
      if ( (v320 & 1) != 0 ) /*0x10f14fc*/
        operator delete(a1: v321); /*0x10f1504*/
      if ( (v322 & 1) != 0 ) /*0x10f150c*/
        operator delete(a1: v323); /*0x10f1514*/
      strcpy(&v322, "\ngrade"); /*0x10f151c*/
      v219 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f1554*/
      if ( v204 <= 9899999 ) /*0x10f155c*/
      {
        if ( v204 <= 9799999 ) /*0x10f1680*/
        {
          if ( v204 <= 9499999 ) /*0x10f1698*/
          {
            if ( v204 <= 9199999 ) /*0x10f16b0*/
            {
              if ( v204 <= 8899999 ) /*0x10f16c8*/
                v220 = v204 > 8599999; /*0x10f16e0*/
              else
                v220 = 2LL; /*0x10f16cc*/
            }
            else
            {
              v220 = 3LL; /*0x10f16b4*/
            }
          }
          else
          {
            v220 = 4LL; /*0x10f169c*/
          }
        }
        else
        {
          v220 = 5LL; /*0x10f1684*/
        }
      }
      else
      {
        v220 = 6LL; /*0x10f1560*/
      }
      GameResult::getImagePathForGrade(result: v220, a2: &v320); /*0x10f16e8*/
      (*(*v219 + 1320LL))(a1: v219, a2: &v320); /*0x10f16fc*/
      v2 = v300; /*0x10f1704*/
      if ( (v320 & 1) != 0 ) /*0x10f1708*/
        operator delete(a1: v321); /*0x10f1710*/
      if ( (v322 & 1) != 0 ) /*0x10f1718*/
        operator delete(a1: v323); /*0x10f1720*/
      strcpy(&v322, "\nclear"); /*0x10f1728*/
      v229 = (*(*v200 + 544LL))(a1: v200, a2: &v322); /*0x10f1758*/
      GameResult::clearBadgePathForClearType(a1: &v320, a2: v207, a3: 0); /*0x10f1768*/
      (*(*v229 + 1320LL))(a1: v229, a2: &v320); /*0x10f177c*/
      if ( (v320 & 1) != 0 ) /*0x10f1784*/
        operator delete(a1: v321); /*0x10f178c*/
      if ( (v322 & 1) != 0 ) /*0x10f1794*/
        operator delete(a1: v323); /*0x10f179c*/
    }
    else
    {
      (*(*v200 + 352LL))(a1: v200, a2: 0LL); /*0x10f1578*/
    }
    if ( (v309 & 1) != 0 ) /*0x10f17a4*/
      operator delete(a1: *&v310[15]); /*0x10f17ac*/
    ++v195; /*0x10f12e0*/
    if ( !v206 ) /*0x10f12e4*/
    {
      std::to_string(this: v195, a2: v221, a3: &v320); /*0x10f1588*/
      v222 = std::string::append(a1: &v320, s: "_glow"); /*0x10f1598*/
      v224 = *v222; /*0x10f15a0*/
      v323 = v222[2]; /*0x10f15a4*/
      v322 = v224; /*0x10f15a8*/
      v222[1] = 0LL; /*0x10f15ac*/
      v222[2] = 0LL; /*0x10f15ac*/
      *v222 = 0LL; /*0x10f15b0*/
      if ( (v320 & 1) != 0 ) /*0x10f15b8*/
        operator delete(a1: v321); /*0x10f15c0*/
      std::to_string(this: v195, a2: v223, a3: v308); /*0x10f15cc*/
      v225 = std::string::append(a1: v308, s: "_icon"); /*0x10f15dc*/
      v226 = *v225; /*0x10f15e4*/
      v321 = v225[2]; /*0x10f15e8*/
      v320 = v226; /*0x10f15ec*/
      v225[1] = 0LL; /*0x10f15f0*/
      v225[2] = 0LL; /*0x10f15f0*/
      *v225 = 0LL; /*0x10f15f4*/
      if ( (v308[0] & 1) != 0 ) /*0x10f15fc*/
        operator delete(a1: v308[2]); /*0x10f1604*/
      v227 = (*(**(v2 + 123) + 544LL))(a1: *(v2 + 123), a2: &v322); /*0x10f1618*/
      (*(*v227 + 352LL))(a1: v227, a2: 0LL); /*0x10f1628*/
      v228 = (*(**(v2 + 123) + 544LL))(a1: *(v2 + 123), a2: &v320); /*0x10f163c*/
      (*(*v228 + 352LL))(a1: v228, a2: 0LL); /*0x10f164c*/
      if ( (v320 & 1) != 0 ) /*0x10f1654*/
        operator delete(a1: v321); /*0x10f165c*/
      if ( (v322 & 1) != 0 ) /*0x10f1664*/
        operator delete(a1: v323); /*0x10f166c*/
    }
  }
  while ( v195 != 4 ); /*0x10f12ec*/
  std::__tree<std::__value_type<unsigned long,unsigned long>,std::__map_value_compare<unsigned long,std::__value_type<unsigned long,unsigned long>,std::less<unsigned long>,true>,std::allocator<std::__value_type<unsigned long,unsigned long>>>::destroy( /*0x10f17bc*/
    a1: v311,
    a2: v311[1]);
  if ( v313 ) /*0x10f17c4*/
  {
    v314 = v313; /*0x10f17c8*/
    operator delete(a1: v313); /*0x10f17cc*/
  }
LABEL_205:
  if ( CoreManager::singleton ) /*0x10f17dc*/
    v230 = *(CoreManager::singleton + 48); /*0x10f17e0*/
  else
    v230 = 0LL; /*0x10f17e8*/
  std::string::basic_string(result: v307, a2: (*(v2 + 98) + 56LL)); /*0x10f17f8*/
  TopResult = DBManager::getTopResult(a1: v230, a2: v307, a3: *(*(v2 + 98) + 80LL)); /*0x10f1814*/
  if ( (v307[0] & 1) != 0 ) /*0x10f1818*/
    operator delete(a1: v307[2]); /*0x10f1820*/
  if ( CoreManager::singleton ) /*0x10f1828*/
    v232 = *(CoreManager::singleton + 48); /*0x10f182c*/
  else
    v232 = 0LL; /*0x10f1834*/
  std::string::basic_string(result: v306, a2: (*(v2 + 98) + 56LL)); /*0x10f1844*/
  ClearType = DBManager::getClearType(a1: v232, a2: v306, a3: *(*(v2 + 98) + 80LL)); /*0x10f1860*/
  if ( (v306[0] & 1) != 0 ) /*0x10f1864*/
    operator delete(a1: v306[2]); /*0x10f186c*/
  if ( TopResult ) /*0x10f1870*/
    LODWORD(a1: TopResult) = ArcUtil::calculateScore( /*0x10f188c*/
                               this: *(TopResult + 32),
                               a2: *(TopResult + 28),
                               a3: *(TopResult + 24),
                               a4: *(TopResult + 20),
                               a5: *(TopResult + 28) + *(TopResult + 32) + *(TopResult + 24),
                               a6: *(TopResult + 132));
  v234 = *(v2 + 98); /*0x10f1890*/
  if ( ArcUtil::calculateScore( /*0x10f18b0*/
         this: *(v234 + 32),
         a2: *(v234 + 28),
         a3: *(v234 + 24),
         a4: *(v234 + 20),
         a5: *(v234 + 28) + *(v234 + 32) + *(v234 + 24),
         a6: *(v234 + 132)) <= TopResult )
  {
    v236 = GameResult::getCalculatedClearType(this: *(v2 + 98)); /*0x10f18c8*/
    switch ( ClearType ) /*0x10f18ec*/
    {
      case -1: /*0x10f18ec*/
        if ( v236 != -1 ) /*0x10f18f4*/
          goto LABEL_218; /*0x10f18f4*/
        break; /*0x10f18f4*/
      case 0: /*0x10f18ec*/
        if ( v236 - 1 < 5 ) /*0x10f20ac*/
          goto LABEL_218; /*0x10f20ac*/
        break; /*0x10f20ac*/
      case 1: /*0x10f18ec*/
        if ( v236 <= 5 ) /*0x10f2080*/
        {
          v272 = 1 << v236; /*0x10f2088*/
          v273 = 44; /*0x10f208c*/
          goto LABEL_303; /*0x10f2090*/
        }
        break; /*0x10f2090*/
      case 2: /*0x10f18ec*/
        if ( v236 == 3 ) /*0x10f20b8*/
          goto LABEL_218; /*0x10f20b8*/
        break; /*0x10f20b8*/
      case 4: /*0x10f18ec*/
        if ( v236 <= 5 ) /*0x10f20c4*/
        {
          v272 = 1 << v236; /*0x10f20cc*/
          v273 = 46; /*0x10f20d0*/
LABEL_303:
          if ( (v272 & v273) != 0 ) /*0x10f20d8*/
            goto LABEL_218; /*0x10f20d8*/
        }
        break; /*0x10f20d8*/
      case 5: /*0x10f18ec*/
        if ( (v236 & 0xFFFFFFFE) == 2 ) /*0x10f209c*/
          goto LABEL_218; /*0x10f209c*/
        break; /*0x10f209c*/
      default:
        break;
    }
  }
  else
  {
LABEL_218:
    if ( CoreManager::singleton ) /*0x10f18b8*/
      v235 = *(CoreManager::singleton + 64); /*0x10f18bc*/
    else
      v235 = 0LL; /*0x10f18fc*/
    std::string::basic_string(result: v305, a2: (*(v2 + 98) + 56LL)); /*0x10f190c*/
    (*(*v235 + 112LL))(a1: v235, a2: v305, a3: *(*(v2 + 98) + 80LL)); /*0x10f1928*/
    if ( (v305[0] & 1) != 0 ) /*0x10f1930*/
      operator delete(a1: v305[2]); /*0x10f1938*/
  }
  GameResultScene::awardCredits(this: v2, a2: *(v2 + 98)); /*0x10f193c*/
  if ( !*(*(v2 + 98) + 132LL) ) /*0x10f194c*/
  {
    GameResultScene::saveResult(this: v2); /*0x10f1958*/
    if ( CoreManager::singleton ) /*0x10f1960*/
    {
      v238 = *(v2 + 195); /*0x10f1964*/
      v239 = *(CoreManager::singleton + 104); /*0x10f1968*/
      v240 = *(v2 + 98); /*0x10f196c*/
      if ( v238 == 1 ) /*0x10f1974*/
      {
        v241 = *(CoreManager::singleton + 96); /*0x10f1978*/
        goto LABEL_232; /*0x10f197c*/
      }
LABEL_235:
      v243 = 0; /*0x10f19e0*/
    }
    else
    {
      v238 = *(v2 + 195); /*0x10f1980*/
      v240 = *(v2 + 98); /*0x10f1984*/
      v239 = 0LL; /*0x10f1988*/
      if ( v238 != 1 ) /*0x10f1990*/
        goto LABEL_235; /*0x10f1990*/
      v241 = 0LL; /*0x10f1994*/
LABEL_232:
      std::string::basic_string(result: v333, a2: (v241 + 24)); /*0x10f1998*/
      MapWithId = WorldManager::getMapWithId(a1: v241, a2: v333); /*0x10f19b4*/
      if ( (v333[0] & 1) != 0 ) /*0x10f19b8*/
        operator delete(a1: *&v333[1]); /*0x10f19c0*/
      v238 = 1; /*0x10f19d0*/
      v243 = *(MapWithId + 135) != 0; /*0x10f19d8*/
    }
    AchievementManager::processAchievementsSongComplete(a1: v239, a2: v240, a3: v238, a4: v243, a5: *(v2 + 239)); /*0x10f19f0*/
  }
  v244 = CoreManager::getCharacterManager(this: v237); /*0x10f19f4*/
  if ( *(*(v244 + 7) + 12LL) == 49 && !*(*(CoreManager::singleton + 120) + 16LL) ) /*0x10f1a10*/
  {
    v245 = CharacterAbilityModifyFragmentLily::consecutivePlays; /*0x10f1a24*/
    if ( CharacterAbilityModifyFragmentLily::consecutivePlays <= 10 ) /*0x10f1a2c*/
      v245 = 10; /*0x10f1a2c*/
    CharacterAbilityModifyFragmentLily::consecutivePlays = v245 - 10; /*0x10f1a34*/
  }
  *(v2 + 121) = std::chrono::steady_clock::now(this: v244) / 1000000; /*0x10f1a60*/
  OnlineUser = OnlineManagerClient::getOnlineUser(this: (v2 + 776)); /*0x10f1a68*/
  if ( OnlineUser && !*(*(v2 + 98) + 132LL) && OnlineManagerClient::isOnline(this: (v2 + 776)) ) /*0x10f1a80*/
    GameResultScene::submitOnlineScore(this: v2); /*0x10f1a8c*/
  else
    GameResultScene::showNextButton(this: v2, a2: 0); /*0x10f1a9c*/
  *v337 = 0; /*0x10f1ab4*/
  LOBYTE(a1: v333[0]) = 26; /*0x10f1ab8*/
  strcpy(v333 + 1, "img/white.png"); /*0x10f1abc*/
  LOWORD(a1: v329) = 0; /*0x10f1ac8*/
  v247 = cocos2d::ui::Button::create(a1: v333, a2: v337, a3: &v329, a4: 0); /*0x10f1ae4*/
  if ( (v329 & 1) == 0 ) /*0x10f1ae8*/
  {
    if ( (v337[0] & 1) == 0 ) /*0x10f1af0*/
      goto LABEL_249; /*0x10f1af0*/
LABEL_257:
    operator delete(a1: *&v337[16]); /*0x10f1c5c*/
    if ( (v333[0] & 1) == 0 ) /*0x10f1c68*/
      goto LABEL_251; /*0x10f1c68*/
LABEL_250:
    operator delete(a1: *&v333[1]); /*0x10f1afc*/
    goto LABEL_251; /*0x10f1b00*/
  }
  operator delete(a1: v330[0]); /*0x10f1c50*/
  if ( (v337[0] & 1) != 0 ) /*0x10f1c58*/
    goto LABEL_257; /*0x10f1c58*/
LABEL_249:
  if ( (v333[0] & 1) != 0 ) /*0x10f1af8*/
    goto LABEL_250; /*0x10f1af8*/
LABEL_251:
  (*(*v247 + 144LL))(a1: v247, a2: 490.0, a3: 300.0); /*0x10f1b04*/
  *&v333[0] = 1065353216LL; /*0x10f1b2c*/
  v248 = (*(*v247 + 312LL))(a1: v247, a2: v333); /*0x10f1b40*/
  v249 = cocos2d::Director::getInstance(this: v248); /*0x10f1b44*/
  *&v333[0] = *(*(**(v249 + 240) + 176LL))(a1: *(v249 + 240)) | 0x428C000000000000LL; /*0x10f1b64*/
  (*(*v247 + 152LL))(a1: v247, a2: v333); /*0x10f1b7c*/
  (*(*v247 + 1152LL))(a1: v247, a2: 0LL); /*0x10f1b90*/
  (*(*v2 + 512LL))(a1: v2, a2: v247, a3: 2147483637LL); /*0x10f1bac*/
  *&v333[0] = &off_176E5B0; /*0x10f1bd0*/
  *&v333[1] = v2; /*0x10f1bd8*/
  *(&v333[1] + 1) = v2; /*0x10f1bdc*/
  *&v334 = v333; /*0x10f1be0*/
  *(&v333[0] + 1) = v2; /*0x10f1be4*/
  strcpy(v337, "&waitForRewardsReady"); /*0x10f1be8*/
  cocos2d::Node::schedule(a1: v2, a2: v333, a3: -2, a4: v337, a5: 0.05, a6: 0.0); /*0x10f1c18*/
  if ( (v337[0] & 1) != 0 ) /*0x10f1c20*/
    operator delete(a1: *&v337[16]); /*0x10f1c28*/
  if ( v333 == v334 ) /*0x10f1c38*/
  {
    v250 = *(*v334 + 32LL); /*0x10f1c74*/
LABEL_260:
    v250(); /*0x10f1c78*/
  }
  else if ( v334 ) /*0x10f1c3c*/
  {
    v250 = *(*v334 + 40LL); /*0x10f1c44*/
    goto LABEL_260; /*0x10f1c48*/
  }
  *&v333[1] = v2; /*0x10f1c88*/
  *(&v333[1] + 1) = v2; /*0x10f1c8c*/
  *&v333[0] = &off_1794CB0; /*0x10f1c90*/
  *(&v333[0] + 1) = v2; /*0x10f1c94*/
  *&v334 = v333; /*0x10f1c98*/
  cocos2d::ui::Widget::addTouchEventListener(a1: v247, a2: v333); /*0x10f1ca4*/
  if ( v333 == v334 ) /*0x10f1cb0*/
  {
    v251 = *(*v334 + 32LL); /*0x10f1cc8*/
LABEL_265:
    v251(); /*0x10f1ccc*/
  }
  else if ( v334 ) /*0x10f1cb4*/
  {
    v251 = *(*v334 + 40LL); /*0x10f1cbc*/
    goto LABEL_265; /*0x10f1cc0*/
  }
  if ( OnlineUser ) /*0x10f1cd0*/
  {
    *&v333[1] = operator new(a1: 0x20uLL); /*0x10f1cf4*/
    v333[0] = xmmword_8A7570; /*0x10f1cf8*/
    strcpy(*&v333[1], "layouts/topbar/cloud_sync.png"); /*0x10f1d00*/
    v252 = operator new(a1: 0x30uLL); /*0x10f1d0c*/
    *&v337[16] = v252; /*0x10f1d28*/
    *v337 = xmmword_8A6640; /*0x10f1d2c*/
    strcpy(v252, "layouts/topbar/top_button_settings.png"); /*0x10f1d34*/
    v253 = moFileLib::moFileReaderSingleton::GetInstance(this: v252); /*0x10f1d3c*/
    (*(*v253 + 16))(a1: &v329, a2: v253, a3: "Sync"); /*0x10f1d54*/
    v254 = *(v2 + 100); /*0x10f1d58*/
    std::string::basic_string(result: v304, a2: v337); /*0x10f1d64*/
    std::string::basic_string(result: v303, a2: v333); /*0x10f1d70*/
    std::string::basic_string(result: v302, a2: &v329); /*0x10f1d7c*/
    v327[0] = &off_1765680; /*0x10f1d8c*/
    v327[1] = v2; /*0x10f1d8c*/
    v328 = v327; /*0x10f1d90*/
    TopBar::setupLeftButton(a1: v254, a2: v304, a3: v303, a4: v302, a5: v327); /*0x10f1da8*/
    if ( v327 == v328 ) /*0x10f1db4*/
    {
      v255 = *(*v328 + 32LL); /*0x10f1dcc*/
LABEL_271:
      v255(); /*0x10f1dd0*/
    }
    else if ( v328 ) /*0x10f1db8*/
    {
      v255 = *(*v328 + 40LL); /*0x10f1dc0*/
      goto LABEL_271; /*0x10f1dc4*/
    }
    if ( (v302[0] & 1) != 0 ) /*0x10f1dd8*/
    {
      operator delete(a1: v302[2]); /*0x10f202c*/
      if ( (v303[0] & 1) != 0 ) /*0x10f2034*/
        goto LABEL_288; /*0x10f2034*/
LABEL_274:
      if ( (v304[0] & 1) == 0 ) /*0x10f1de8*/
        goto LABEL_275; /*0x10f1de8*/
LABEL_289:
      operator delete(a1: v304[2]); /*0x10f2048*/
      if ( (v329 & 1) != 0 ) /*0x10f2054*/
        goto LABEL_290; /*0x10f2054*/
LABEL_276:
      if ( (v337[0] & 1) == 0 ) /*0x10f1df8*/
        goto LABEL_277; /*0x10f1df8*/
LABEL_291:
      operator delete(a1: *&v337[16]); /*0x10f2068*/
      if ( (v333[0] & 1) != 0 ) /*0x10f2074*/
LABEL_278:
        operator delete(a1: *&v333[1]); /*0x10f1e04*/
    }
    else
    {
      if ( (v303[0] & 1) == 0 ) /*0x10f1de0*/
        goto LABEL_274; /*0x10f1de0*/
LABEL_288:
      operator delete(a1: v303[2]); /*0x10f2038*/
      if ( (v304[0] & 1) != 0 ) /*0x10f2044*/
        goto LABEL_289; /*0x10f2044*/
LABEL_275:
      if ( (v329 & 1) == 0 ) /*0x10f1df0*/
        goto LABEL_276; /*0x10f1df0*/
LABEL_290:
      operator delete(a1: v330[0]); /*0x10f2058*/
      if ( (v337[0] & 1) != 0 ) /*0x10f2064*/
        goto LABEL_291; /*0x10f2064*/
LABEL_277:
      if ( (v333[0] & 1) != 0 ) /*0x10f1e00*/
        goto LABEL_278; /*0x10f1e00*/
    }
  }
  if ( (*(v2 + 239) - 7) <= 1 ) /*0x10f1e18*/
  {
    *&v333[1] = operator new(a1: 0x20uLL); /*0x10f1e3c*/
    v333[0] = xmmword_8A6090; /*0x10f1e40*/
    strcpy(*&v333[1], "img/top_white_shadow.png"); /*0x10f1e48*/
    v256 = cocos2d::Sprite::create(a1: v333); /*0x10f1e5c*/
    if ( (v333[0] & 1) != 0 ) /*0x10f1e60*/
      operator delete(a1: *&v333[1]); /*0x10f1e68*/
    *&v333[0] = 0x3F8000003F000000LL; /*0x10f1e74*/
    v257 = (*(*v256 + 312LL))(a1: v256, a2: v333); /*0x10f1e88*/
    v258 = cocos2d::Director::getInstance(this: v257); /*0x10f1e8c*/
    v259 = *(*(**(v258 + 240) + 176LL))(a1: *(v258 + 240)); /*0x10f1ea0*/
    DWORD1(a1: v333[0]) = 0; /*0x10f1ea4*/
    *v333 = v259 * 0.5; /*0x10f1eac*/
    v260 = (*(*v256 + 152LL))(a1: v256, a2: v333); /*0x10f1ec0*/
    v261 = cocos2d::Director::getInstance(this: v260); /*0x10f1ec4*/
    v262 = (*(**(v261 + 240) + 176LL))(a1: *(v261 + 240)); /*0x10f1ed4*/
    (*(*v256 + 144LL))(a1: v256, a2: *v262, a3: -1.3); /*0x10f1ef4*/
    v263 = (*(*v256 + 1152LL))(a1: v256, a2: 0LL); /*0x10f1f08*/
    v264 = cocos2d::DelayTime::create(this: v263, a2: 4.5); /*0x10f1f14*/
    v265 = cocos2d::FadeTo::create(this: (&qword_A8 + 2), a2: 3.5); /*0x10f1f20*/
    v267 = cocos2d::EaseSineOut::create(this: v265, a2: v266); /*0x10f1f28*/
    v268 = cocos2d::FadeTo::create(this: (&dword_30 + 2), a2: 3.0); /*0x10f1f34*/
    cocos2d::EaseSineOut::create(this: v268, a2: v269); /*0x10f1f38*/
    v270 = cocos2d::Sequence::create(a1: v267); /*0x10f1f48*/
    cocos2d::Repeat::create(a1: v270, a2: 0x7FFFFFFFu); /*0x10f1f50*/
    v271 = cocos2d::Sequence::create(a1: v264); /*0x10f1f60*/
    (*(*v256 + 920LL))(a1: v256, a2: v271); /*0x10f1f74*/
    strcpy(v333, " top_white_shadow"); /*0x10f1f88*/
    (*(*v2 + 528LL))(a1: v2, a2: v256, a3: 1LL, a4: v333); /*0x10f1fac*/
    if ( (v333[0] & 1) != 0 ) /*0x10f1fbc*/
      operator delete(a1: *&v333[1]); /*0x10f1fc4*/
  }
  if ( *(*(CoreManager::singleton + 168) + 8LL) ) /*0x10f1fd4*/
    cocos2d::Node::scheduleUpdate(this: v2); /*0x10f1fe0*/
  return 1LL; /*0x10f2024*/
}
__int128 *__fastcall GameResultScene::setupResultUI(GameResultScene *this)
{
  __int64 v2; // x20
  __int64 SongForId; // x22
  __int64 *v4; // x9
  GameResult **v5; // x27
  __int64 v6; // x8
  int v7; // w10
  int v8; // w11
  SongDifficulty *v9; // x20
  __int64 v10; // x21
  __int64 TopResult; // x21
  __int64 v12; // x0
  __int64 v13; // x23
  cocos2d::Ref *v14; // x24
  __int64 v20; // x23
  __int64 v21; // x23
  int v22; // w24
  __int64 v23; // x23
  __int64 v24; // x23
  __int64 v25; // x0
  __int64 v26; // x22
  __int64 Grade; // x0
  __int64 v28; // x0
  __int64 v29; // x22
  _BYTE *v30; // x8
  const char *v31; // x10
  __int128 v32; // q0
  CoreManager *v33; // x0
  Character *v34; // x23
  __int64 v35; // x0
  __int64 v36; // x22
  cocos2d::Director *v37; // x0
  float v38; // s0
  float v39; // s8
  __int64 Instance; // x0
  float *v41; // x0
  __int64 v42; // x0
  float v43; // s0
  __int64 v44; // x0
  float *v45; // x0
  __int64 v46; // x0
  float32x2_t v47; // d8
  float32x2_t v48; // d9
  float v49; // s0
  cocos2d::FadeIn *v50; // x0
  cocos2d::Action *v51; // x0
  cocos2d::ActionInterval *v52; // x1
  float *v53; // x23
  const cocos2d::Vec2 *v54; // x1
  cocos2d::MoveBy *v55; // x0
  cocos2d::ActionInterval *v56; // x1
  float *v57; // x0
  __int64 v58; // x0
  cocos2d::ui::Text *v59; // x22
  GameResult *v60; // x0
  char *v61; // x2
  GameResult *v62; // x8
  int v63; // w3
  cocos2d::Action *v64; // x23
  cocos2d::RepeatForever *v65; // x0
  cocos2d::ActionInterval *v66; // x1
  cocos2d::Action *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x23
  float *v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x8
  int v74; // w0
  __int64 v75; // x8
  int v76; // w22
  char *v77; // x2
  __int64 v78; // x23
  char *v79; // x23
  __int64 v80; // x0
  __int64 v81; // x24
  char *v82; // x2
  int v83; // w8
  unsigned __int64 v84; // x0
  _QWORD *v85; // x0
  __int128 v86; // q0
  __int64 v87; // x0
  __int64 v88; // x23
  cocos2d::Action *v89; // x21
  cocos2d::RepeatForever *v90; // x0
  cocos2d::ActionInterval *v91; // x1
  cocos2d::Action *v92; // x0
  void *v93; // x0
  __int64 v94; // x0
  __int64 v95; // x21
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x8
  HPBar *v99; // x21
  int v100; // w22
  char v101; // w23
  float v102; // s8
  int v103; // w0
  __int64 v104; // x0
  __int64 v105; // x21
  int v106; // w8
  int v107; // w9
  __int16 v108; // w10
  _QWORD *v109; // x0
  __int128 v110; // q0
  char *v111; // x2
  char *v112; // x1
  size_t v113; // x2
  _QWORD *v114; // x0
  __int128 v115; // q0
  int v116; // w8
  char v117; // w1
  char v118; // w2
  char v119; // w3
  __int64 v120; // x0
  char *v121; // x2
  __int64 v122; // x20
  std::__itoa *v123; // x0
  __int64 v124; // x20
  __int64 v125; // x0
  char *v126; // x2
  __int64 v127; // x20
  _QWORD *v128; // x0
  __int128 v129; // q0
  __int64 v130; // x0
  char *v131; // x2
  std::__itoa *v132; // x0
  _QWORD *v133; // x0
  char *v134; // x2
  __int128 v135; // q0
  _QWORD *v136; // x0
  __int128 v137; // q0
  _QWORD *v138; // x0
  __int128 v139; // q0
  char *v140; // x1
  size_t v141; // x2
  _QWORD *v142; // x0
  char *v143; // x2
  __int128 v144; // q0
  _QWORD *v145; // x0
  __int128 v146; // q0
  _QWORD *v147; // x0
  __int128 v148; // q0
  struct _Unwind_Exception *v149; // x1
  size_t v150; // x2
  __int64 v151; // x20
  char *v152; // x1
  size_t v153; // x2
  _QWORD *v154; // x0
  __int128 v155; // q0
  __int64 v156; // x0
  __int64 v157; // x0
  char *v158; // x2
  __int64 v159; // x20
  __int64 v160; // x0
  __int64 v161; // x0
  void (*v162)(void); // x8
  __int64 v163; // x0
  __int64 v164; // x20
  char *v165; // x2
  __int64 v166; // x0
  __int64 v167; // x20
  char *v168; // x2
  __int64 v169; // x0
  void (*v170)(void); // x8
  void (*v171)(void); // x8
  __int128 *result; // x0
  __int64 (*v173)(void); // x8
  char v174; // [xsp+8h] [xbp-1B8h] BYREF
  char v175[15]; // [xsp+9h] [xbp-1B7h] BYREF
  void *v176; // [xsp+18h] [xbp-1A8h]
  unsigned __int64 v177[3]; // [xsp+20h] [xbp-1A0h] BYREF
  int v178; // [xsp+3Ch] [xbp-184h] BYREF
  __int128 v179; // [xsp+40h] [xbp-180h] BYREF
  void *v180; // [xsp+50h] [xbp-170h]
  __int128 v181; // [xsp+60h] [xbp-160h] BYREF
  struct _Unwind_Exception *v182; // [xsp+70h] [xbp-150h]
  _OWORD v183[2]; // [xsp+80h] [xbp-140h] BYREF
  unsigned __int64 v184[3]; // [xsp+A0h] [xbp-120h] BYREF
  unsigned __int64 v185[3]; // [xsp+B8h] [xbp-108h] BYREF
  _QWORD v186[4]; // [xsp+D0h] [xbp-F0h] BYREF
  _QWORD *v187; // [xsp+F0h] [xbp-D0h]
  __int128 v188[2]; // [xsp+100h] [xbp-C0h] BYREF
  __int128 *v189; // [xsp+120h] [xbp-A0h]
  __int64 v190; // [xsp+138h] [xbp-88h]

  v190 = *(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40); /*0xd3e750*/
  if ( CoreManager::singleton ) /*0xd3e75c*/
    v2 = *(CoreManager::singleton + 32); /*0xd3e760*/
  else
    v2 = 0LL; /*0xd3e768*/
  std::string::basic_string(result: v185, a2: (*(this + 98) + 56LL)); /*0xd3e778*/
  SongForId = SongManager::getSongForId(a1: v2, a2: v185); /*0xd3e78c*/
  if ( (v185[0] & 1) != 0 ) /*0xd3e790*/
    operator delete(a1: v185[2]); /*0xd3e798*/
  v4 = *(SongForId + 416); /*0xd3e79c*/
  if ( !v4 )
LABEL_12:
    sub_E70F48(a1: "map::at:  key not found");
  v5 = (this + 784); /*0xd3e7a4*/
  v6 = *(this + 98); /*0xd3e7a8*/
  v7 = *(v6 + 80); /*0xd3e7b0*/
  while ( 1 ) /*0xd3e7c8*/
  {
    while ( 1 ) /*0xd3e7c0*/
    {
      v8 = *(v4 + 8); /*0xd3e7c0*/
      if ( v8 <= v7 ) /*0xd3e7c8*/
        break; /*0xd3e7c8*/
      v4 = *v4; /*0xd3e7b8*/
      if ( !v4 ) /*0xd3e7bc*/
        goto LABEL_12; /*0xd3e7bc*/
    }
    if ( v8 >= v7 ) /*0xd3e7cc*/
      break; /*0xd3e7cc*/
    v4 = v4[1]; /*0xd3e7d0*/
    if ( !v4 ) /*0xd3e7d4*/
      goto LABEL_12; /*0xd3e7d4*/
  }
  v9 = v4[5]; /*0xd3e7ec*/
  if ( CoreManager::singleton ) /*0xd3e7f0*/
    v10 = *(CoreManager::singleton + 48); /*0xd3e7f4*/
  else
    v10 = 0LL; /*0xd3e7fc*/
  std::string::basic_string(result: v184, a2: (v6 + 56)); /*0xd3e808*/
  TopResult = DBManager::getTopResult(a1: v10, a2: v184, a3: *(*v5 + 20)); /*0xd3e824*/
  if ( (v184[0] & 1) != 0 ) /*0xd3e828*/
    operator delete(a1: v184[2]); /*0xd3e830*/
  v12 = *(this + 99); /*0xd3e840*/
  LOBYTE(a1: v188[0]) = 18; /*0xd3e84c*/
  strcpy(v188 + 1, "songImage"); /*0xd3e850*/
  v13 = (*(*v12 + 544LL))(a1: v12, a2: v188); /*0xd3e86c*/
  if ( (v188[0] & 1) != 0 ) /*0xd3e870*/
    operator delete(a1: *&v188[1]); /*0xd3e878*/
  Song::getJacketFilepathForDifficultyClass(a1: SongForId, a2: *(*v5 + 20), a3: 0, a4: v188); /*0xd3e890*/
  cocos2d::ui::ImageView::loadTexture(result: v13, a2: v188, a3: 0); /*0xd3e8a0*/
  if ( (v188[0] & 1) != 0 ) /*0xd3e8a8*/
    operator delete(a1: *&v188[1]); /*0xd3e8b0*/
  strcpy(v188, "*img/jacket_shadow.png"); /*0xd3e8c8*/
  v14 = cocos2d::Sprite::create(a1: v188); /*0xd3e8e4*/
  if ( (v188[0] & 1) != 0 ) /*0xd3e8e8*/
    operator delete(a1: *&v188[1]); /*0xd3e8f0*/
  *&v188[0] = 0LL; /*0xd3e8f4*/
  (*(*v14 + 312LL))(a1: v14, a2: v188); /*0xd3e908*/
  (*(*v14 + 1152LL))(a1: v14, a2: 200LL); /*0xd3e91c*/
  __asm { FMOV            V0.2S, #-9.0 } /*0xd3e920*/
  *&v188[0] = _D0; /*0xd3e924*/
  (*(*v14 + 152LL))(a1: v14, a2: v188); /*0xd3e938*/
  (*(*v13 + 512LL))(a1: v13, a2: v14, a3: 0xFFFFFFFFLL); /*0xd3e950*/
  v20 = *(this + 99); /*0xd3e954*/
  *&v183[1] = operator new(a1: 0x20uLL); /*0xd3e978*/
  v183[0] = xmmword_8A7AE0; /*0xd3e97c*/
  strcpy(*&v183[1], "songNameLabel-fullnolocalize"); /*0xd3e984*/
  v21 = (*(*v20 + 544LL))(a1: v20, a2: v183); /*0xd3e9a8*/
  v22 = *(*v5 + 20); /*0xd3e9ac*/
  std::string::basic_string(result: v188, a2: (CoreManager::singleton + 192)); /*0xd3e9b8*/
  Song::getTitleForLocale(a1: v188, a2: &v181, a3: SongForId, a4: v22); /*0xd3e9cc*/
  if ( (v188[0] & 1) != 0 ) /*0xd3e9d4*/
    operator delete(a1: *&v188[1]); /*0xd3e9dc*/
  cocos2d::ui::Text::setString(a1: v21, a2: &v181); /*0xd3e9e8*/
  if ( (v181 & 1) != 0 ) /*0xd3e9f0*/
    operator delete(a1: v182); /*0xd3e9f8*/
  if ( (v183[0] & 1) != 0 ) /*0xd3ea00*/
    operator delete(a1: *&v183[1]); /*0xd3ea08*/
  v23 = *(this + 99); /*0xd3ea0c*/
  *&v183[1] = operator new(a1: 0x20uLL); /*0xd3ea30*/
  v183[0] = xmmword_8A6F90; /*0xd3ea34*/
  strcpy(*&v183[1], "songArtistLabel-fullnolocalize"); /*0xd3ea3c*/
  v24 = (*(*v23 + 544LL))(a1: v23, a2: v183); /*0xd3ea5c*/
  std::string::basic_string(result: v188, a2: (CoreManager::singleton + 192)); /*0xd3ea68*/
  Song::getArtistForLocale(a1: v188, a2: &v181, a3: SongForId); /*0xd3ea78*/
  if ( (v188[0] & 1) != 0 ) /*0xd3ea80*/
    operator delete(a1: *&v188[1]); /*0xd3ea88*/
  cocos2d::ui::Text::setString(a1: v24, a2: &v181); /*0xd3ea94*/
  if ( (v181 & 1) != 0 ) /*0xd3ea9c*/
    operator delete(a1: v182); /*0xd3eaa4*/
  if ( (v183[0] & 1) != 0 ) /*0xd3eaac*/
    operator delete(a1: *&v183[1]); /*0xd3eab4*/
  v25 = *(this + 99); /*0xd3eac4*/
  LOBYTE(a1: v188[0]) = 20; /*0xd3ead0*/
  strcpy(v188 + 1, "gradeImage"); /*0xd3ead8*/
  v26 = (*(*v25 + 544LL))(a1: v25, a2: v188); /*0xd3eaf4*/
  if ( (v188[0] & 1) != 0 ) /*0xd3eaf8*/
    operator delete(a1: *&v188[1]); /*0xd3eb00*/
  Grade = GameResult::getGrade(this: *v5); /*0xd3eb08*/
  GameResult::getImagePathForGrade(result: Grade, a2: v188); /*0xd3eb10*/
  (*(*v26 + 1320LL))(a1: v26, a2: v188); /*0xd3eb24*/
  if ( (v188[0] & 1) != 0 ) /*0xd3eb2c*/
    operator delete(a1: *&v188[1]); /*0xd3eb34*/
  v28 = *(this + 99); /*0xd3eb48*/
  LOBYTE(a1: v188[0]) = 28; /*0xd3eb50*/
  strcpy(v188 + 1, "clearTypeImage"); /*0xd3eb54*/
  v29 = (*(*v28 + 544LL))(a1: v28, a2: v188); /*0xd3eb74*/
  if ( (v188[0] & 1) != 0 ) /*0xd3eb78*/
    operator delete(a1: *&v188[1]); /*0xd3eb80*/
  switch ( GameResult::getCalculatedClearType(this: *v5) ) /*0xd3ebac*/
  {
    case 1u: /*0xd3ebac*/
    case 4u: /*0xd3ebac*/
    case 5u: /*0xd3ebac*/
      qmemcpy(v188, "(img/clear_normal.png", 21); /*0xd3ebcc*/
      v30 = &v188[1] + 5; /*0xd3ebd8*/
      goto LABEL_48; /*0xd3ebdc*/
    case 2u: /*0xd3ebac*/
      v31 = "img/clear_full.png"; /*0xd3ec00*/
      goto LABEL_47; /*0xd3ec04*/
    case 3u: /*0xd3ebac*/
      v31 = "img/clear_pure.png"; /*0xd3ebec*/
      goto LABEL_47; /*0xd3ebf0*/
    default:
      v31 = "img/clear_fail.png"; /*0xd3ec14*/
LABEL_47:
      v32 = *v31; /*0xd3ec18*/
      LOBYTE(a1: v188[0]) = 36; /*0xd3ec20*/
      v30 = &v188[1] + 3; /*0xd3ec24*/
      *(&v188[1] + 1) = 26478; /*0xd3ec28*/
      *(v188 + 1) = v32; /*0xd3ec2c*/
LABEL_48:
      *v30 = 0; /*0xd3ec30*/
      v33 = (*(*v29 + 1320LL))(a1: v29, a2: v188); /*0xd3ec44*/
      if ( (v188[0] & 1) != 0 ) /*0xd3ec4c*/
        operator delete(a1: *&v188[1]); /*0xd3ec54*/
      v34 = *(CoreManager::getCharacterManager(this: v33) + 56); /*0xd3ec68*/
      v35 = *(this + 99); /*0xd3ec6c*/
      LOBYTE(a1: v188[0]) = 18; /*0xd3ec78*/
      strcpy(v188 + 1, "character"); /*0xd3ec7c*/
      v36 = (*(*v35 + 544LL))(a1: v35, a2: v188); /*0xd3ec98*/
      if ( (v188[0] & 1) != 0 ) /*0xd3ec9c*/
        operator delete(a1: *&v188[1]); /*0xd3eca4*/
      Character::getSpriteFilename(this: v34, a2: 0, a3: 0, a4: v188); /*0xd3ecb8*/
      (*(*v36 + 1320LL))(a1: v36, a2: v188); /*0xd3eccc*/
      if ( (v188[0] & 1) != 0 ) /*0xd3ecd4*/
        operator delete(a1: *&v188[1]); /*0xd3ecdc*/
      v37 = (*(*v36 + 224LL))(a1: v36); /*0xd3ecec*/
      v39 = v38; /*0xd3ecf0*/
      Instance = cocos2d::Director::getInstance(this: v37); /*0xd3ecf4*/
      v41 = (*(**(Instance + 240) + 176LL))(a1: *(Instance + 240)); /*0xd3ed04*/
      if ( v41[1] <= 720.0 /*0xd3ed40*/
        || (v42 = cocos2d::Director::getInstance(this: v41),
            v41 = (*(**(v42 + 240) + 176LL))(a1: *(v42 + 240)),
            v41[1] <= 960.0) )
      {
        v44 = cocos2d::Director::getInstance(this: v41); /*0xd3ed50*/
        v45 = (*(**(v44 + 240) + 176LL))(a1: *(v44 + 240)); /*0xd3ed60*/
        v43 = 0.0; /*0xd3ed74*/
        if ( v45[1] > 720.0 ) /*0xd3ed78*/
        {
          v46 = cocos2d::Director::getInstance(this: v45); /*0xd3ed7c*/
          v43 = *((*(**(v46 + 240) + 176LL))(a1: *(v46 + 240)) + 4) + -720.0; /*0xd3ed9c*/
        }
      }
      else
      {
        v43 = 240.0; /*0xd3ed48*/
      }
      (*(*v36 + 216LL))(a1: v36, a2: v39 + ((v43 / 240.0) * 100.0)); /*0xd3edc8*/
      v47.n64_u64[0] = *(*(*v36 + 168LL))(a1: v36); /*0xd3eddc*/
      Character::getCenterScreenOffset(this: v34, a2: v183); /*0xd3ede8*/
      v48.n64_u64[0] = *&v183[0]; /*0xd3edec*/
      Character::getResultsOffset(this: v34, a2: &v181, result: v49); /*0xd3edf8*/
      *&v188[0] = vadd_f32(vadd_f32(vadd_f32(v47, 3270508544LL), v48), *&v181); /*0xd3ee14*/
      v50 = (*(*v36 + 152LL))(a1: v36, a2: v188); /*0xd3ee28*/
      v51 = cocos2d::FadeIn::create(this: v50, a2: 0.8); /*0xd3ee3c*/
      v53 = cocos2d::EaseCubicActionOut::create(this: v51, a2: v52); /*0xd3ee4c*/
      *&v188[0] = 3276275712LL; /*0xd3ee50*/
      v55 = cocos2d::MoveBy::create(this: v188, a2: 0.8, a3: v54); /*0xd3ee5c*/
      cocos2d::EaseCubicActionOut::create(this: v55, a2: v56); /*0xd3ee60*/
      v57 = cocos2d::Spawn::create(a1: v53); /*0xd3ee70*/
      (*(*v36 + 920LL))(a1: v36, a2: v57); /*0xd3ee84*/
      v58 = *(this + 99); /*0xd3ee94*/
      LOBYTE(a1: v188[0]) = 20; /*0xd3eea0*/
      strcpy(v188 + 1, "scoreLabel"); /*0xd3eea8*/
      v59 = (*(*v58 + 544LL))(a1: v58, a2: v188); /*0xd3eec4*/
      if ( (v188[0] & 1) != 0 ) /*0xd3eec8*/
        operator delete(a1: *&v188[1]); /*0xd3eed0*/
      v60 = ArcUtil::calculateScore( /*0xd3eeec*/
              this: *(*v5 + 8),
              a2: *(*v5 + 7),
              a3: *(*v5 + 6),
              a4: *(*v5 + 5),
              a5: *(*v5 + 7) + *(*v5 + 8) + *(*v5 + 6),
              a6: *(*v5 + 132));
      GameResult::scoreStringForInt(this: v60, a2: v61, a3: v188); /*0xd3eef4*/
      cocos2d::ui::Text::setString(a1: v59, a2: v188); /*0xd3ef00*/
      if ( (v188[0] & 1) != 0 ) /*0xd3ef08*/
        operator delete(a1: *&v188[1]); /*0xd3ef10*/
      v62 = *v5; /*0xd3ef14*/
      if ( !*(*v5 + 7) && !*(v62 + 8) ) /*0xd3ef20*/
      {
        v63 = *(v62 + 5); /*0xd3ef28*/
        if ( v63 == *(v62 + 24) /*0xd3ef5c*/
          && ArcUtil::calculateScore(this: 0LL, a2: 0, a3: *(v62 + 6), a4: v63, a5: *(v62 + 6), a6: *(v62 + 132)) >= 10000001 )
        {
          cocos2d::Color4B::Color4B(this: v183, a2: 15, a3: 113, a4: 133, a5: 255); /*0xd3ef74*/
          cocos2d::Size::Size(this: v188, a2: 3.0, a3: -3.0); /*0xd3ef84*/
          cocos2d::ui::Text::enableShadow(this: v59, a2: v183, a3: v188); /*0xd3ef98*/
          v64 = cocos2d::FadeTo::create(this: (off_F8 + 7), a2: 0.007); /*0xd3efc0*/
          cocos2d::DelayTime::create(this: v64, a2: 0.05); /*0xd3efc4*/
          cocos2d::FadeTo::create(this: (&qword_A8 + 7), a2: 0.007); /*0xd3efd4*/
          v65 = cocos2d::Sequence::create(a1: v64); /*0xd3efe8*/
          v67 = cocos2d::RepeatForever::create(this: v65, a2: v66); /*0xd3efec*/
          (*(*v59 + 920LL))(a1: v59, a2: v67); /*0xd3f000*/
        }
      }
      if ( *(*v5 + 132) ) /*0xd3f008*/
      {
        v68 = *(this + 99); /*0xd3f020*/
        LOBYTE(a1: v188[0]) = 26; /*0xd3f028*/
        strcpy(v188 + 1, "notsaved_back"); /*0xd3f02c*/
        v69 = (*(*v68 + 544LL))(a1: v68, a2: v188); /*0xd3f04c*/
        if ( (v188[0] & 1) != 0 ) /*0xd3f050*/
          operator delete(a1: *&v188[1]); /*0xd3f058*/
        (*(*v69 + 352LL))(a1: v69, a2: 1LL); /*0xd3f06c*/
        v70 = (*(*v59 + 344LL))(a1: v59); /*0xd3f07c*/
        (*(*v69 + 80LL))(a1: v69, a2: *v70); /*0xd3f090*/
        v71 = *(this + 99); /*0xd3f0a4*/
        LOBYTE(a1: v188[0]) = 26; /*0xd3f0ac*/
        strcpy(v188 + 1, "notsaved_text"); /*0xd3f0b0*/
        v72 = (*(*v71 + 544LL))(a1: v71, a2: v188); /*0xd3f0c8*/
        (*(*v72 + 352LL))(a1: v72, a2: 1LL); /*0xd3f0d8*/
        if ( (v188[0] & 1) != 0 ) /*0xd3f0e0*/
          operator delete(a1: *&v188[1]); /*0xd3f0e8*/
      }
      if ( TopResult ) /*0xd3f0ec*/
        LODWORD(a1: TopResult) = ArcUtil::calculateScore( /*0xd3f108*/
                                   this: *(TopResult + 32),
                                   a2: *(TopResult + 28),
                                   a3: *(TopResult + 24),
                                   a4: *(TopResult + 20),
                                   a5: *(TopResult + 28) + *(TopResult + 32) + *(TopResult + 24),
                                   a6: *(TopResult + 132));
      v73 = *(this + 98); /*0xd3f10c*/
      v74 = ArcUtil::calculateScore( /*0xd3f124*/
              this: *(v73 + 32),
              a2: *(v73 + 28),
              a3: *(v73 + 24),
              a4: *(v73 + 20),
              a5: *(v73 + 28) + *(v73 + 32) + *(v73 + 24),
              a6: *(v73 + 132));
      v75 = *(this + 99); /*0xd3f138*/
      LOBYTE(a1: v188[0]) = 28; /*0xd3f140*/
      strcpy(v188 + 1, "pastScoreLabel"); /*0xd3f144*/
      v76 = v74; /*0xd3f154*/
      v78 = (*(*v75 + 544LL))(a1: v75, a2: v188); /*0xd3f168*/
      if ( TopResult ) /*0xd3f16c*/
      {
        GameResult::scoreStringForInt(this: TopResult, a2: v77, a3: v183); /*0xd3f178*/
      }
      else
      {
        LOWORD(a1: v183[0]) = 12290; /*0xd3f184*/
        BYTE2(a1: v183[0]) = 0; /*0xd3f188*/
      }
      cocos2d::ui::Text::setString(a1: v78, a2: v183); /*0xd3f194*/
      if ( (v183[0] & 1) != 0 ) /*0xd3f19c*/
        operator delete(a1: *&v183[1]); /*0xd3f1a4*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f1ac*/
        operator delete(a1: *&v188[1]); /*0xd3f1b4*/
      v79 = "+"; /*0xd3f1dc*/
      if ( ArcUtil::calculateScore( /*0xd3f20c*/
             this: *(*v5 + 8),
             a2: *(*v5 + 7),
             a3: *(*v5 + 6),
             a4: *(*v5 + 5),
             a5: *(*v5 + 7) + *(*v5 + 8) + *(*v5 + 6),
             a6: *(*v5 + 132)) != TopResult
        && ArcUtil::calculateScore(
             this: *(*v5 + 8),
             a2: *(*v5 + 7),
             a3: *(*v5 + 6),
             a4: *(*v5 + 5),
             a5: *(*v5 + 7) + *(*v5 + 8) + *(*v5 + 6),
             a6: *(*v5 + 132)) <= TopResult )
      {
        v79 = "-"; /*0xd3f20c*/
      }
      v80 = *(this + 99); /*0xd3f220*/
      LOBYTE(a1: v188[0]) = 28; /*0xd3f228*/
      strcpy(v188 + 1, "scoreDiffLabel"); /*0xd3f22c*/
      v81 = (*(*v80 + 544LL))(a1: v80, a2: v188); /*0xd3f24c*/
      v83 = ArcUtil::calculateScore( /*0xd3f268*/
              this: *(*v5 + 8),
              a2: *(*v5 + 7),
              a3: *(*v5 + 6),
              a4: *(*v5 + 5),
              a5: *(*v5 + 7) + *(*v5 + 8) + *(*v5 + 6),
              a6: *(*v5 + 132))
          - TopResult;
      if ( v83 >= 0 ) /*0xd3f26c*/
        v84 = v83; /*0xd3f26c*/
      else
        v84 = -v83; /*0xd3f26c*/
      GameResult::scoreStringForInt(this: v84, a2: v82, a3: &v181); /*0xd3f274*/
      v85 = std::string::insert(a1: &v181, a2: 0LL, s: v79); /*0xd3f284*/
      v86 = *v85; /*0xd3f28c*/
      *&v183[1] = v85[2]; /*0xd3f290*/
      v183[0] = v86; /*0xd3f294*/
      v85[1] = 0LL; /*0xd3f298*/
      v85[2] = 0LL; /*0xd3f298*/
      *v85 = 0LL; /*0xd3f29c*/
      cocos2d::ui::Text::setString(a1: v81, a2: v183); /*0xd3f2a8*/
      if ( (v183[0] & 1) != 0 ) /*0xd3f2b0*/
      {
        operator delete(a1: *&v183[1]); /*0xd3f37c*/
        if ( (v181 & 1) == 0 ) /*0xd3f384*/
        {
LABEL_90:
          if ( (v188[0] & 1) == 0 ) /*0xd3f2c0*/
            goto LABEL_92; /*0xd3f2c0*/
          goto LABEL_91; /*0xd3f2c0*/
        }
      }
      else if ( (v181 & 1) == 0 ) /*0xd3f2b8*/
      {
        goto LABEL_90; /*0xd3f2b8*/
      }
      operator delete(a1: v182); /*0xd3f38c*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f394*/
LABEL_91:
        operator delete(a1: *&v188[1]); /*0xd3f2c4*/
LABEL_92:
      v87 = *(this + 99); /*0xd3f2cc*/
      strcpy(v188, " scoreSectionHigh"); /*0xd3f2e0*/
      v88 = (*(*v87 + 544LL))(a1: v87, a2: v188); /*0xd3f300*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f304*/
        operator delete(a1: *&v188[1]); /*0xd3f30c*/
      if ( v76 <= TopResult ) /*0xd3f314*/
      {
        (*(*v88 + 352LL))(a1: v88, a2: 0LL); /*0xd3f3ac*/
      }
      else
      {
        (*(*v88 + 1152LL))(a1: v88, a2: 150LL); /*0xd3f328*/
        v89 = cocos2d::FadeTo::create(this: (off_F8 + 7), a2: 2.0); /*0xd3f33c*/
        cocos2d::FadeTo::create(this: (&qword_90 + 6), a2: 2.0); /*0xd3f348*/
        v90 = cocos2d::Sequence::create(a1: v89); /*0xd3f358*/
        v92 = cocos2d::RepeatForever::create(this: v90, a2: v91); /*0xd3f35c*/
        (*(*v88 + 920LL))(a1: v88, a2: v92); /*0xd3f370*/
      }
      v93 = HPBar::create(a1: *(*(this + 98) + 84LL), a2: *(*(this + 98) + 144LL), a3: *(*(this + 98) + 121LL), a4: 1); /*0xd3f3c4*/
      *(this + 106) = v93; /*0xd3f3c8*/
      (*(*v93 + 128LL))(a1: v93, a2: 0.77); /*0xd3f3e0*/
      v94 = *(this + 99); /*0xd3f3e4*/
      LOBYTE(a1: v188[0]) = 12; /*0xd3f3f4*/
      strcpy(v188 + 1, "hpNode"); /*0xd3f3fc*/
      v95 = (*(*v94 + 544LL))(a1: v94, a2: v188); /*0xd3f41c*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f420*/
        operator delete(a1: *&v188[1]); /*0xd3f428*/
      (*(*v95 + 1176LL))(a1: v95, a2: 1LL); /*0xd3f43c*/
      (*(*v95 + 504LL))(a1: v95, a2: *(this + 106)); /*0xd3f450*/
      v96 = *(this + 106); /*0xd3f45c*/
      *&v188[0] = 0x3F80000000000000LL; /*0xd3f460*/
      (*(*v96 + 312LL))(a1: v96, a2: v188); /*0xd3f470*/
      v97 = *(this + 106); /*0xd3f474*/
      *&v188[0] = 0LL; /*0xd3f478*/
      (*(*v97 + 152LL))(a1: v97, a2: v188); /*0xd3f488*/
      v98 = *(this + 98); /*0xd3f48c*/
      v99 = *(this + 106); /*0xd3f490*/
      v100 = *(v98 + 96); /*0xd3f4a4*/
      v101 = *(v98 + 120); /*0xd3f4a8*/
      v102 = (*(v98 + 40) & ~(*(v98 + 40) >> 31)); /*0xd3f4b8*/
      v103 = ArcUtil::calculateScore( /*0xd3f4bc*/
               this: *(v98 + 32),
               a2: *(v98 + 28),
               a3: *(v98 + 24),
               a4: *(v98 + 20),
               a5: *(v98 + 28) + *(v98 + 32) + *(v98 + 24),
               a6: *(v98 + 132));
      HPBar::setHP(this: v99, a2: v102, a3: v100, a4: v101, a5: v103); /*0xd3f4d4*/
      v104 = *(this + 99); /*0xd3f4e8*/
      LOBYTE(a1: v188[0]) = 30; /*0xd3f4f0*/
      strcpy(v188 + 1, "difficultyLabel"); /*0xd3f4f4*/
      v105 = (*(*v104 + 544LL))(a1: v104, a2: v188); /*0xd3f514*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f518*/
        operator delete(a1: *&v188[1]); /*0xd3f520*/
      v106 = *(*v5 + 20); /*0xd3f528*/
      if ( v106 == 3 ) /*0xd3f530*/
      {
        v107 = 1870226754; /*0xd3f578*/
        v108 = 25710; /*0xd3f57c*/
        goto LABEL_110; /*0xd3f57c*/
      }
      if ( v106 == 2 ) /*0xd3f538*/
      {
        v107 = 1970566470; /*0xd3f564*/
        v108 = 25970; /*0xd3f568*/
LABEL_110:
        LOBYTE(a1: v181) = 12; /*0xd3f580*/
        *(&v181 + 1) = v107; /*0xd3f584*/
        *(&v181 + 5) = v108; /*0xd3f588*/
        BYTE7(a1: v181) = 0; /*0xd3f58c*/
        goto LABEL_112; /*0xd3f590*/
      }
      if ( v106 ) /*0xd3f53c*/
      {
        LOBYTE(a1: v181) = 14; /*0xd3f5a8*/
        *(&v181 + 1) = 1936028240; /*0xd3f5ac*/
        DWORD1(a1: v181) = 1953391987; /*0xd3f5b0*/
        BYTE8(a1: v181) = 0; /*0xd3f5b4*/
      }
      else
      {
        LOBYTE(a1: v181) = 8; /*0xd3f54c*/
        *(&v181 + 1) = 1953718608; /*0xd3f550*/
        BYTE5(a1: v181) = 0; /*0xd3f554*/
      }
LABEL_112:
      v109 = std::string::append(a1: &v181, s: " "); /*0xd3f5b8*/
      v110 = *v109; /*0xd3f5cc*/
      *&v183[1] = v109[2]; /*0xd3f5d0*/
      v183[0] = v110; /*0xd3f5d4*/
      v109[1] = 0LL; /*0xd3f5d8*/
      v109[2] = 0LL; /*0xd3f5d8*/
      *v109 = 0LL; /*0xd3f5dc*/
      SongDifficulty::getRatingString(this: v9, a2: 1, a3: v111, a4: &v179); /*0xd3f5f0*/
      if ( (v179 & 1) != 0 ) /*0xd3f608*/
        v112 = v180; /*0xd3f608*/
      else
        v112 = &v179 + 1; /*0xd3f608*/
      if ( (v179 & 1) != 0 ) /*0xd3f60c*/
        v113 = *(&v179 + 1); /*0xd3f60c*/
      else
        v113 = v179 >> 1; /*0xd3f60c*/
      v114 = std::string::append(a1: v183, src: v112, n: v113); /*0xd3f614*/
      v115 = *v114; /*0xd3f61c*/
      *&v188[1] = v114[2]; /*0xd3f620*/
      v188[0] = v115; /*0xd3f624*/
      v114[1] = 0LL; /*0xd3f628*/
      v114[2] = 0LL; /*0xd3f628*/
      *v114 = 0LL; /*0xd3f62c*/
      cocos2d::ui::Text::setString(a1: v105, a2: v188); /*0xd3f638*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f640*/
      {
        operator delete(a1: *&v188[1]); /*0xd3f694*/
        if ( (v179 & 1) == 0 ) /*0xd3f69c*/
        {
LABEL_120:
          if ( (v183[0] & 1) == 0 ) /*0xd3f650*/
            goto LABEL_121; /*0xd3f650*/
          goto LABEL_129; /*0xd3f650*/
        }
      }
      else if ( (v179 & 1) == 0 ) /*0xd3f648*/
      {
        goto LABEL_120; /*0xd3f648*/
      }
      operator delete(a1: v180); /*0xd3f6a4*/
      if ( (v183[0] & 1) == 0 ) /*0xd3f6ac*/
      {
LABEL_121:
        if ( (v181 & 1) == 0 ) /*0xd3f658*/
          goto LABEL_123; /*0xd3f658*/
        goto LABEL_122; /*0xd3f658*/
      }
LABEL_129:
      operator delete(a1: *&v183[1]); /*0xd3f6b0*/
      if ( (v181 & 1) != 0 ) /*0xd3f6bc*/
LABEL_122:
        operator delete(a1: v182); /*0xd3f65c*/
LABEL_123:
      v116 = *(v9 + 42); /*0xd3f664*/
      if ( v116 == 3 ) /*0xd3f670*/
      {
        v117 = -126; /*0xd3f6d4*/
        v118 = 35; /*0xd3f6d8*/
        v119 = 40; /*0xd3f6dc*/
      }
      else if ( v116 == 2 ) /*0xd3f678*/
      {
        v117 = 80; /*0xd3f6c4*/
        v118 = 25; /*0xd3f6c8*/
        v119 = 75; /*0xd3f6cc*/
      }
      else if ( v116 ) /*0xd3f67c*/
      {
        v117 = 100; /*0xd3f6e4*/
        v118 = -116; /*0xd3f6e8*/
        v119 = 60; /*0xd3f6ec*/
      }
      else
      {
        v117 = 10; /*0xd3f680*/
        v118 = -126; /*0xd3f684*/
        v119 = -66; /*0xd3f688*/
      }
      cocos2d::Color3B::Color3B(this: v188, a2: v117, a3: v118, a4: v119); /*0xd3f6f0*/
      cocos2d::Color4B::Color4B(this: &v178, a2: v188, a3: 255); /*0xd3f710*/
      cocos2d::ui::Text::setTextColor(a1: v105, a2: v178); /*0xd3f71c*/
      v120 = *(this + 99); /*0xd3f72c*/
      strcpy(v188, "$maxComboCountLabel"); /*0xd3f738*/
      v122 = (*(*v120 + 544LL))(a1: v120, a2: v188); /*0xd3f75c*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f760*/
        operator delete(a1: *&v188[1]); /*0xd3f768*/
      v123 = *(*v5 + 24); /*0xd3f770*/
      if ( (v123 & 0x80000000) != 0 ) /*0xd3f774*/
      {
        (*(*v122 + 352LL))(a1: v122, a2: 0LL); /*0xd3f7b0*/
      }
      else
      {
        std::to_string(this: v123, a2: v121, a3: v188); /*0xd3f77c*/
        cocos2d::ui::Text::setString(a1: v122, a2: v188); /*0xd3f788*/
        if ( (v188[0] & 1) != 0 ) /*0xd3f790*/
          operator delete(a1: *&v188[1]); /*0xd3f798*/
      }
      v124 = *(this + 99); /*0xd3f7b4*/
      *&v188[1] = operator new(a1: 0x20uLL); /*0xd3f7d8*/
      v188[0] = xmmword_8A6090; /*0xd3f7dc*/
      strcpy(*&v188[1], "shiningPerfectCountLabel"); /*0xd3f7e4*/
      v125 = (*(*v124 + 544LL))(a1: v124, a2: v188); /*0xd3f7fc*/
      *(this + 113) = v125; /*0xd3f800*/
      v127 = v125; /*0xd3f808*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f80c*/
      {
        operator delete(a1: *&v188[1]); /*0xd3f814*/
        v127 = *(this + 113); /*0xd3f818*/
      }
      std::to_string(this: *(*v5 + 5), a2: v126, a3: v183); /*0xd3f828*/
      v128 = std::string::insert(a1: v183, a2: 0LL, s: "+"); /*0xd3f83c*/
      v129 = *v128; /*0xd3f844*/
      *&v188[1] = v128[2]; /*0xd3f848*/
      v188[0] = v129; /*0xd3f84c*/
      v128[1] = 0LL; /*0xd3f850*/
      v128[2] = 0LL; /*0xd3f850*/
      *v128 = 0LL; /*0xd3f854*/
      cocos2d::ui::Text::setString(a1: v127, a2: v188); /*0xd3f860*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f868*/
        operator delete(a1: *&v188[1]); /*0xd3f870*/
      if ( (v183[0] & 1) != 0 ) /*0xd3f878*/
        operator delete(a1: *&v183[1]); /*0xd3f880*/
      v130 = *(this + 99); /*0xd3f890*/
      strcpy(v188, "&lateEarlyCountLabel"); /*0xd3f8a0*/
      *(this + 114) = (*(*v130 + 544LL))(a1: v130, a2: v188); /*0xd3f8c0*/
      if ( (v188[0] & 1) != 0 ) /*0xd3f8c8*/
        operator delete(a1: *&v188[1]); /*0xd3f8d0*/
      v132 = *(*v5 + 25); /*0xd3f8d8*/
      if ( v132 == -1 || *(*v5 + 26) == -1 ) /*0xd3f8ec*/
      {
        v156 = *(this + 114); /*0xd3fb78*/
        LOWORD(a1: v188[0]) = 0; /*0xd3fb7c*/
        cocos2d::ui::Text::setString(a1: v156, a2: v188); /*0xd3fb84*/
        goto LABEL_190; /*0xd3fb88*/
      }
      std::to_string(this: v132, a2: v131, a3: v183); /*0xd3f8f4*/
      v133 = std::string::insert(a1: v183, a2: 0LL, s: "L"); /*0xd3f908*/
      v135 = *v133; /*0xd3f910*/
      *&v188[1] = v133[2]; /*0xd3f914*/
      v188[0] = v135; /*0xd3f918*/
      v133[1] = 0LL; /*0xd3f91c*/
      v133[2] = 0LL; /*0xd3f91c*/
      *v133 = 0LL; /*0xd3f920*/
      if ( (v183[0] & 1) != 0 ) /*0xd3f928*/
        operator delete(a1: *&v183[1]); /*0xd3f930*/
      if ( *(*(CoreManager::singleton + 112) + 24LL) ) /*0xd3f93c*/
      {
        std::to_string(this: *(*v5 + 27), a2: v134, a3: &v179); /*0xd3f950*/
        v136 = std::string::insert(a1: &v179, a2: 0LL, s: "(P"); /*0xd3f964*/
        v137 = *v136; /*0xd3f96c*/
        v182 = v136[2]; /*0xd3f970*/
        v181 = v137; /*0xd3f974*/
        v136[1] = 0LL; /*0xd3f978*/
        v136[2] = 0LL; /*0xd3f978*/
        *v136 = 0LL; /*0xd3f97c*/
        v138 = std::string::append(a1: &v181, s: ")"); /*0xd3f98c*/
        v139 = *v138; /*0xd3f994*/
        *&v183[1] = v138[2]; /*0xd3f9a0*/
        v183[0] = v139; /*0xd3f9a4*/
        v138[1] = 0LL; /*0xd3f9a8*/
        v138[2] = 0LL; /*0xd3f9a8*/
        *v138 = 0LL; /*0xd3f9ac*/
        if ( (v183[0] & 1) != 0 ) /*0xd3f9c0*/
          v140 = *&v183[1]; /*0xd3f9c0*/
        else
          v140 = v183 + 1; /*0xd3f9c0*/
        if ( (v183[0] & 1) != 0 ) /*0xd3f9c4*/
          v141 = *(&v183[0] + 1); /*0xd3f9c4*/
        else
          v141 = LOBYTE(a1: v183[0]) >> 1; /*0xd3f9c4*/
        std::string::append(a1: v188, src: v140, n: v141); /*0xd3f9cc*/
        if ( (v183[0] & 1) != 0 ) /*0xd3f9d4*/
        {
          operator delete(a1: *&v183[1]); /*0xd40008*/
          if ( (v181 & 1) == 0 ) /*0xd40010*/
          {
LABEL_161:
            if ( (v179 & 1) == 0 ) /*0xd3f9e4*/
              goto LABEL_163; /*0xd3f9e4*/
            goto LABEL_162; /*0xd3f9e4*/
          }
        }
        else if ( (v181 & 1) == 0 ) /*0xd3f9dc*/
        {
          goto LABEL_161; /*0xd3f9dc*/
        }
        operator delete(a1: v182); /*0xd40018*/
        if ( (v179 & 1) != 0 ) /*0xd40020*/
LABEL_162:
          operator delete(a1: v180); /*0xd3f9e8*/
      }
LABEL_163:
      std::to_string(this: *(*v5 + 26), a2: v134, a3: &v181); /*0xd3f9f0*/
      v142 = std::string::insert(a1: &v181, a2: 0LL, s: "E"); /*0xd3fa10*/
      v144 = *v142; /*0xd3fa18*/
      *&v183[1] = v142[2]; /*0xd3fa1c*/
      v183[0] = v144; /*0xd3fa20*/
      v142[1] = 0LL; /*0xd3fa24*/
      v142[2] = 0LL; /*0xd3fa24*/
      *v142 = 0LL; /*0xd3fa28*/
      if ( (v181 & 1) != 0 ) /*0xd3fa30*/
        operator delete(a1: v182); /*0xd3fa38*/
      if ( *(*(CoreManager::singleton + 112) + 24LL) ) /*0xd3fa44*/
      {
        std::to_string(this: *(*v5 + 28), a2: v143, a3: v177); /*0xd3fa58*/
        v145 = std::string::insert(a1: v177, a2: 0LL, s: "(P"); /*0xd3fa6c*/
        v146 = *v145; /*0xd3fa74*/
        v180 = v145[2]; /*0xd3fa78*/
        v179 = v146; /*0xd3fa7c*/
        v145[1] = 0LL; /*0xd3fa80*/
        v145[2] = 0LL; /*0xd3fa80*/
        *v145 = 0LL; /*0xd3fa84*/
        v147 = std::string::append(a1: &v179, s: ")"); /*0xd3fa94*/
        v148 = *v147; /*0xd3fa9c*/
        v182 = v147[2]; /*0xd3faa8*/
        v181 = v148; /*0xd3faac*/
        v147[1] = 0LL; /*0xd3fab0*/
        v147[2] = 0LL; /*0xd3fab0*/
        *v147 = 0LL; /*0xd3fab4*/
        if ( (v181 & 1) != 0 ) /*0xd3fac8*/
          v149 = v182; /*0xd3fac8*/
        else
          v149 = (&v181 + 1); /*0xd3fac8*/
        if ( (v181 & 1) != 0 ) /*0xd3facc*/
          v150 = *(&v181 + 1); /*0xd3facc*/
        else
          v150 = v181 >> 1; /*0xd3facc*/
        std::string::append(a1: v183, src: v149, n: v150); /*0xd3fad4*/
        if ( (v181 & 1) != 0 ) /*0xd3fadc*/
        {
          operator delete(a1: v182); /*0xd4002c*/
          if ( (v179 & 1) == 0 ) /*0xd40034*/
          {
LABEL_174:
            if ( (v177[0] & 1) == 0 ) /*0xd3faec*/
              goto LABEL_176; /*0xd3faec*/
            goto LABEL_175; /*0xd3faec*/
          }
        }
        else if ( (v179 & 1) == 0 ) /*0xd3fae4*/
        {
          goto LABEL_174; /*0xd3fae4*/
        }
        operator delete(a1: v180); /*0xd4003c*/
        if ( (v177[0] & 1) != 0 ) /*0xd40044*/
LABEL_175:
          operator delete(a1: v177[2]); /*0xd3faf0*/
      }
LABEL_176:
      v151 = *(this + 114); /*0xd3faf8*/
      sub_110825C(a1: &v179, s: "  ", a3: v188); /*0xd3fb0c*/
      if ( (v183[0] & 1) != 0 ) /*0xd3fb28*/
        v152 = *&v183[1]; /*0xd3fb28*/
      else
        v152 = v183 + 1; /*0xd3fb28*/
      if ( (v183[0] & 1) != 0 ) /*0xd3fb2c*/
        v153 = *(&v183[0] + 1); /*0xd3fb2c*/
      else
        v153 = LOBYTE(a1: v183[0]) >> 1; /*0xd3fb2c*/
      v154 = std::string::append(a1: &v179, src: v152, n: v153); /*0xd3fb34*/
      v155 = *v154; /*0xd3fb3c*/
      v182 = v154[2]; /*0xd3fb40*/
      v181 = v155; /*0xd3fb44*/
      v154[1] = 0LL; /*0xd3fb48*/
      v154[2] = 0LL; /*0xd3fb48*/
      *v154 = 0LL; /*0xd3fb4c*/
      cocos2d::ui::Text::setString(a1: v151, a2: &v181); /*0xd3fb58*/
      if ( (v181 & 1) == 0 ) /*0xd3fb60*/
      {
        if ( (v179 & 1) == 0 ) /*0xd3fb68*/
          goto LABEL_184; /*0xd3fb68*/
LABEL_188:
        operator delete(a1: v180); /*0xd3fb9c*/
        if ( (v183[0] & 1) == 0 ) /*0xd3fba8*/
          goto LABEL_190; /*0xd3fba8*/
        goto LABEL_189; /*0xd3fba8*/
      }
      operator delete(a1: v182); /*0xd3fb90*/
      if ( (v179 & 1) != 0 ) /*0xd3fb98*/
        goto LABEL_188; /*0xd3fb98*/
LABEL_184:
      if ( (v183[0] & 1) != 0 ) /*0xd3fb70*/
LABEL_189:
        operator delete(a1: *&v183[1]); /*0xd3fbac*/
LABEL_190:
      if ( (v188[0] & 1) != 0 ) /*0xd3fbb8*/
        operator delete(a1: *&v188[1]); /*0xd3fbc0*/
      v157 = *(this + 99); /*0xd3fbd0*/
      strcpy(v188, "\"perfectCountLabel"); /*0xd3fbdc*/
      v159 = (*(*v157 + 544LL))(a1: v157, a2: v188); /*0xd3fbfc*/
      if ( (v188[0] & 1) != 0 ) /*0xd3fc00*/
        operator delete(a1: *&v188[1]); /*0xd3fc08*/
      std::to_string(this: *(*v5 + 6), a2: v158, a3: v188); /*0xd3fc18*/
      cocos2d::ui::Text::setString(a1: v159, a2: v188); /*0xd3fc24*/
      if ( (v188[0] & 1) != 0 ) /*0xd3fc2c*/
        operator delete(a1: *&v188[1]); /*0xd3fc34*/
      v160 = *(this + 99); /*0xd3fc44*/
      strcpy(v183, "(additionalInfoButton"); /*0xd3fc54*/
      v161 = (*(*v160 + 544LL))(a1: v160, a2: v183); /*0xd3fc70*/
      *&v188[0] = &off_16F3A68; /*0xd3fc80*/
      *(&v188[0] + 1) = this; /*0xd3fc80*/
      v189 = v188; /*0xd3fc84*/
      cocos2d::ui::Widget::addTouchEventListener(a1: v161, a2: v188); /*0xd3fc8c*/
      if ( v188 == v189 ) /*0xd3fc98*/
      {
        v162 = *(*v189 + 32LL); /*0xd3fcb0*/
      }
      else
      {
        if ( !v189 ) /*0xd3fc9c*/
          goto LABEL_201; /*0xd3fc9c*/
        v162 = *(*v189 + 40LL); /*0xd3fca4*/
      }
      v162(); /*0xd3fcb4*/
LABEL_201:
      if ( (v183[0] & 1) != 0 ) /*0xd3fcbc*/
        operator delete(a1: *&v183[1]); /*0xd3fcc4*/
      v163 = *(this + 99); /*0xd3fcd8*/
      LOBYTE(a1: v188[0]) = 28; /*0xd3fce0*/
      strcpy(v188 + 1, "nearCountLabel"); /*0xd3fce4*/
      v164 = (*(*v163 + 544LL))(a1: v163, a2: v188); /*0xd3fd04*/
      std::to_string(this: *(*v5 + 7), a2: v165, a3: v183); /*0xd3fd10*/
      cocos2d::ui::Text::setString(a1: v164, a2: v183); /*0xd3fd1c*/
      if ( (v183[0] & 1) != 0 ) /*0xd3fd24*/
        operator delete(a1: *&v183[1]); /*0xd3fd2c*/
      if ( (v188[0] & 1) != 0 ) /*0xd3fd34*/
        operator delete(a1: *&v188[1]); /*0xd3fd3c*/
      v166 = *(this + 99); /*0xd3fd50*/
      LOBYTE(a1: v188[0]) = 28; /*0xd3fd58*/
      strcpy(v188 + 1, "missCountLabel"); /*0xd3fd5c*/
      v167 = (*(*v166 + 544LL))(a1: v166, a2: v188); /*0xd3fd7c*/
      std::to_string(this: *(*v5 + 9), a2: v168, a3: v183); /*0xd3fd88*/
      cocos2d::ui::Text::setString(a1: v167, a2: v183); /*0xd3fd94*/
      if ( (v183[0] & 1) != 0 ) /*0xd3fd9c*/
        operator delete(a1: *&v183[1]); /*0xd3fda4*/
      if ( (v188[0] & 1) != 0 ) /*0xd3fdac*/
        operator delete(a1: *&v188[1]); /*0xd3fdb4*/
      *&v188[1] = operator new(a1: 0x20uLL); /*0xd3fdd8*/
      v188[0] = xmmword_8A5F00; /*0xd3fddc*/
      strcpy(*&v188[1], "layouts/results/Results.csb"); /*0xd3fde4*/
      *(this + 101) = cocos2d::CSLoader::createTimeline(a1: v188); /*0xd3fdf8*/
      if ( (v188[0] & 1) != 0 ) /*0xd3fe00*/
        operator delete(a1: *&v188[1]); /*0xd3fe08*/
      (*(**(this + 99) + 920LL))(a1: *(this + 99)); /*0xd3fe1c*/
      (*(**(this + 101) + 128LL))(a1: *(this + 101), a2: 0LL); /*0xd3fe30*/
      v169 = *(this + 101); /*0xd3fe34*/
      v174 = 4; /*0xd3fe50*/
      strcpy(v175, "in"); /*0xd3fe54*/
      v186[0] = &off_170EFD8; /*0xd3fe58*/
      v186[1] = this; /*0xd3fe58*/
      v187 = v186; /*0xd3fe5c*/
      (*(*v169 + 280LL))(a1: v169, a2: &v174, a3: v186); /*0xd3fe70*/
      if ( v186 == v187 ) /*0xd3fe7c*/
      {
        v170 = *(*v187 + 32LL); /*0xd3fe94*/
      }
      else
      {
        if ( !v187 ) /*0xd3fe80*/
          goto LABEL_218; /*0xd3fe80*/
        v170 = *(*v187 + 40LL); /*0xd3fe88*/
      }
      v170(); /*0xd3fe98*/
LABEL_218:
      if ( (v174 & 1) != 0 ) /*0xd3fea0*/
        operator delete(a1: v176); /*0xd3fea8*/
      *&v188[0] = &off_17896E0; /*0xd3febc*/
      *(&v188[0] + 1) = this; /*0xd3febc*/
      v189 = v188; /*0xd3fed0*/
      LOBYTE(a1: v183[0]) = 26; /*0xd3fed4*/
      strcpy(v183 + 1, "startTimeline"); /*0xd3fed8*/
      cocos2d::Node::scheduleOnce(a1: this, a2: v188, a3: v183, a4: 0.3); /*0xd3fefc*/
      if ( (v183[0] & 1) != 0 ) /*0xd3ff04*/
        operator delete(a1: *&v183[1]); /*0xd3ff0c*/
      if ( v188 == v189 ) /*0xd3ff1c*/
      {
        v171 = *(*v189 + 32LL); /*0xd3ff34*/
      }
      else
      {
        if ( !v189 ) /*0xd3ff20*/
          goto LABEL_227; /*0xd3ff20*/
        v171 = *(*v189 + 40LL); /*0xd3ff28*/
      }
      v171(); /*0xd3ff38*/
LABEL_227:
      *&v188[0] = &off_16DC760; /*0xd3ff3c*/
      v189 = v188; /*0xd3ff64*/
      LOBYTE(a1: v183[0]) = 24; /*0xd3ff68*/
      strcpy(v183 + 1, "gradeInSound"); /*0xd3ff70*/
      cocos2d::Node::scheduleOnce(a1: this, a2: v188, a3: v183, a4: 2.7); /*0xd3ff90*/
      if ( (v183[0] & 1) != 0 ) /*0xd3ff98*/
        operator delete(a1: *&v183[1]); /*0xd3ffa0*/
      result = v189; /*0xd3ffa4*/
      if ( v188 == v189 ) /*0xd3ffb0*/
      {
        v173 = *(*v189 + 32LL); /*0xd3ffc8*/
      }
      else
      {
        if ( !v189 ) /*0xd3ffb4*/
          return result; /*0xd3ffb4*/
        v173 = *(*v189 + 40LL); /*0xd3ffbc*/
      }
      return v173();
  }
}
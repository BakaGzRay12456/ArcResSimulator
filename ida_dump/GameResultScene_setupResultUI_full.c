void __fastcall sub_640DD0(__int64 a1)
{
  __int64 v2; // x20
  const void **SongForId; // x22
  __int64 *v4; // x25
  __int64 Difficulty; // x20
  __int64 v6; // x21
  std::__1 *TopResult; // x21
  __int64 v8; // x23
  __int64 v9; // x23
  __int64 v10; // x24
  _QWORD *v11; // x26
  __int64 v17; // x23
  __int64 v18; // x23
  __int64 v19; // x23
  __int64 v20; // x23
  __int64 v21; // x22
  __int64 v22; // x22
  __int64 v23; // x22
  __int64 v24; // x22
  int CalculatedClearType; // w0
  __int64 v26; // x23
  __int64 v27; // x22
  __int64 v28; // x22
  float v29; // s0
  float v30; // s0
  float32x2_t v31; // d8
  void *v32; // d9
  __int64 v33; // x0
  __int64 v34; // x23
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  __int64 v44; // x0
  __int64 v45; // x22
  __int64 v46; // x22
  std::__1 *Score; // x0
  int v48; // w1
  __int64 v49; // x0
  __int64 v50; // x23
  __int64 v51; // x23
  float *v52; // x0
  __int64 v53; // x22
  __int64 v54; // x0
  int v55; // w22
  __int64 v56; // x23
  int v57; // w1
  __int64 v58; // x23
  const char *v59; // x23
  __int64 v60; // x24
  __int64 v61; // x24
  int v62; // w1
  int v63; // w8
  unsigned __int64 v64; // x0
  __int64 v65; // x0
  __int128 v66; // q0
  __int64 v67; // x23
  __int64 v68; // x23
  __int64 v69; // x21
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x21
  __int64 v82; // x21
  __int64 CharacterManager; // x0
  int v84; // w0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x21
  __int64 v88; // x0
  float v89; // s0
  int v90; // w8
  float v91; // s8
  float v92; // s9
  __int64 v93; // x22
  unsigned int v94; // w23
  int v95; // w0
  __int64 v96; // x21
  __int64 v97; // x21
  __int64 v98; // x21
  __int64 v99; // x21
  float v100; // s0
  __int64 v101; // x0
  __int64 v102; // x21
  __int64 v103; // x21
  __int64 v104; // x0
  __int64 v105; // x21
  __int64 v106; // x21
  void **v107; // x23
  void **v108; // x22
  __int64 v109; // x0
  __int64 v110; // x20
  int v111; // w1
  __int64 v112; // x20
  std::__1 *v113; // x0
  __int64 v114; // x20
  int v115; // w1
  __int64 v116; // x20
  __int64 v117; // x0
  __int128 v118; // q0
  __int64 v119; // x20
  int v120; // w1
  std::__1 *v121; // x0
  __int64 v122; // x0
  int v123; // w1
  __int128 v124; // q0
  __int64 v125; // x0
  __int128 v126; // q0
  __int64 v127; // x0
  __int128 v128; // q0
  void **v129; // x1
  void *v130; // x2
  __int64 v131; // x0
  int v132; // w1
  __int128 v133; // q0
  __int64 v134; // x0
  __int128 v135; // q0
  __int64 v136; // x0
  __int128 v137; // q0
  void **v138; // x1
  void *v139; // x2
  __int64 v140; // x20
  size_t v141; // x21
  void **v142; // x22
  __int128 *v143; // x1
  void **v144; // x1
  void *v145; // x2
  __int64 v146; // x0
  __int128 v147; // q0
  __int64 v148; // x20
  __int64 v149; // x20
  int v150; // w1
  __int64 v151; // x20
  __int64 v152; // x20
  __int64 v153; // x0
  void (*v154)(void); // x8
  __int64 v155; // x20
  __int64 v156; // x20
  __int64 v157; // x20
  __int64 v158; // x20
  __int64 v159; // x20
  __int64 v160; // x20
  __int64 v161; // x20
  __int64 v162; // x20
  __int64 v163; // x20
  __int64 v164; // x20
  int v165; // w1
  __int64 v166; // x20
  __int64 v167; // x20
  int v168; // w1
  __int64 v169; // x20
  void (*v170)(void); // x8
  void (*v171)(void); // x8
  void (*v172)(void); // x8
  void *v173[2]; // [xsp+10h] [xbp-190h] BYREF
  char v174; // [xsp+27h] [xbp-179h]
  void *v175; // [xsp+28h] [xbp-178h] BYREF
  char v176; // [xsp+3Fh] [xbp-161h]
  void *v177[2]; // [xsp+40h] [xbp-160h] BYREF
  __int64 v178; // [xsp+50h] [xbp-150h]
  void *v179[2]; // [xsp+60h] [xbp-140h] BYREF
  __int64 v180; // [xsp+70h] [xbp-130h]
  int v181; // [xsp+7Ch] [xbp-124h] BYREF
  void *v182[2]; // [xsp+80h] [xbp-120h] BYREF
  __int64 v183; // [xsp+90h] [xbp-110h]
  void *v184[2]; // [xsp+A0h] [xbp-100h] BYREF
  __int64 v185; // [xsp+B0h] [xbp-F0h]
  void *v186; // [xsp+C0h] [xbp-E0h] BYREF
  char v187; // [xsp+D7h] [xbp-C9h]
  void *v188; // [xsp+D8h] [xbp-C8h] BYREF
  char v189; // [xsp+EFh] [xbp-B1h]
  __int64 v190[3]; // [xsp+F0h] [xbp-B0h] BYREF
  __int64 *v191; // [xsp+108h] [xbp-98h]
  __int128 v192; // [xsp+110h] [xbp-90h] BYREF
  __int64 v193; // [xsp+120h] [xbp-80h]
  __int128 *v194; // [xsp+128h] [xbp-78h]

  if ( CoreManager::singleton != 0 ) /*0x640e14*/
    v2 = *(CoreManager::singleton + 32); /*0x640e18*/
  else
    v2 = 0; /*0x640e20*/
  std::string::basic_string(); /*0x640e30*/
  SongForId = SongManager::getSongForId(a1: v2, a2: &v188); /*0x640e40*/
  v4 = (a1 + 696); /*0x640e44*/
  if ( v189 < 0 ) /*0x640e4c*/
    operator delete(a1: v188); /*0x640e54*/
  Difficulty = Song_getDifficulty(a1: SongForId, a2: *(*v4 + 80)); /*0x640e68*/
  if ( CoreManager::singleton != 0 ) /*0x640e70*/
    v6 = *(CoreManager::singleton + 48); /*0x640e74*/
  else
    v6 = 0; /*0x640e7c*/
  std::string::basic_string(); /*0x640e8c*/
  TopResult = DBManager::getTopResult(a1: v6, a2: &v186, a3: *(*v4 + 80)); /*0x640ea4*/
  if ( v187 < 0 ) /*0x640eac*/
    operator delete(a1: v186); /*0x640eb4*/
  v8 = *(a1 + 704); /*0x640eb8*/
  idk_like_strcpy(a1: &v192, __s: "songImage"); /*0x640ec8*/
  v9 = (*(*v8 + 528LL))(a1: v8, a2: &v192); /*0x640ee0*/
  if ( SHIBYTE(v193) < 0 ) /*0x640ee8*/
    operator delete(a1: v192); /*0x640ef0*/
  Song::getJacketFilepathForDifficultyClass(a1: SongForId, a2: *(*v4 + 80), a3: 0, a4: 0, a5: &v192); /*0x640f0c*/
  cocos2d::ui::ImageView::loadTexture(result: v9, a2: &v192, a3: 0); /*0x640f1c*/
  if ( SHIBYTE(v193) < 0 ) /*0x640f24*/
    operator delete(a1: v192); /*0x640f2c*/
  idk_like_strcpy(a1: &v192, __s: "img/jacket_shadow.png"); /*0x640f3c*/
  v10 = cocos2d::Sprite::create(a1: &v192); /*0x640f48*/
  v11 = (a1 + 704); /*0x640f4c*/
  if ( SHIBYTE(v193) < 0 ) /*0x640f54*/
    operator delete(a1: v192); /*0x640f5c*/
  *&v192 = 0; /*0x640f60*/
  (*(*v10 + 296LL))(a1: v10, a2: &v192); /*0x640f74*/
  (*(*v10 + 1136LL))(a1: v10, a2: 200); /*0x640f88*/
  __asm { FMOV            V0.2S, #-9.0 } /*0x640f8c*/
  *&v192 = _D0; /*0x640f90*/
  (*(*v10 + 152LL))(a1: v10, a2: &v192); /*0x640fa4*/
  (*(*v9 + 496LL))(a1: v9, a2: v10, a3: 0xFFFFFFFFLL); /*0x640fbc*/
  v17 = *v11; /*0x640fc0*/
  idk_like_strcpy(a1: &v192, __s: "songNameLabel-fullnolocalize"); /*0x640fd0*/
  v18 = (*(*v17 + 528LL))(a1: v17, a2: &v192); /*0x640fe8*/
  Song::getLocalizedTitle(a1: SongForId, a2: *(*v4 + 80), a3: v184); /*0x640ffc*/
  cocos2d::ui::Text::setString(a1: v18, a2: v184); /*0x641008*/
  if ( SHIBYTE(v185) < 0 ) /*0x641010*/
    operator delete(a1: v184[0]); /*0x641018*/
  if ( SHIBYTE(v193) < 0 ) /*0x641020*/
    operator delete(a1: v192); /*0x641028*/
  v19 = *v11; /*0x64102c*/
  idk_like_strcpy(a1: &v192, __s: "songArtistLabel-fullnolocalize"); /*0x64103c*/
  v20 = (*(*v19 + 528LL))(a1: v19, a2: &v192); /*0x641054*/
  Song::getLocalizedArtist(a1: SongForId, a2: *(*v4 + 80), a3: v184); /*0x641068*/
  cocos2d::ui::Text::setString(a1: v20, a2: v184); /*0x641074*/
  if ( SHIBYTE(v185) < 0 ) /*0x64107c*/
    operator delete(a1: v184[0]); /*0x641084*/
  if ( SHIBYTE(v193) < 0 ) /*0x64108c*/
    operator delete(a1: v192); /*0x641094*/
  v21 = *v11; /*0x641098*/
  idk_like_strcpy(a1: &v192, __s: "gradeImage"); /*0x6410a8*/
  v22 = (*(*v21 + 528LL))(a1: v21, a2: &v192); /*0x6410c0*/
  if ( SHIBYTE(v193) < 0 ) /*0x6410c8*/
    operator delete(a1: v192); /*0x6410d0*/
  sub_790FCC(a1: *v4, a2: 0, a3: &v192); /*0x6410e0*/
  (*(*v22 + 1304LL))(a1: v22, a2: &v192); /*0x6410f4*/
  if ( SHIBYTE(v193) < 0 ) /*0x6410fc*/
    operator delete(a1: v192); /*0x641104*/
  v23 = *v11; /*0x641108*/
  idk_like_strcpy(a1: &v192, __s: "clearTypeImage"); /*0x641118*/
  v24 = (*(*v23 + 528LL))(a1: v23, a2: &v192); /*0x641130*/
  if ( SHIBYTE(v193) < 0 ) /*0x641138*/
    operator delete(a1: v192); /*0x641140*/
  CalculatedClearType = GameResult::getCalculatedClearType(a1: *v4); /*0x641148*/
  sub_791050(a1: CalculatedClearType, a2: &v192); /*0x641150*/
  (*(*v24 + 1304LL))(a1: v24, a2: &v192); /*0x641164*/
  if ( SHIBYTE(v193) < 0 ) /*0x64116c*/
    operator delete(a1: v192); /*0x641174*/
  v26 = *(CoreManager::getCharacterManager() + 48); /*0x64117c*/
  v27 = *v11; /*0x641180*/
  idk_like_strcpy(a1: &v192, __s: "character"); /*0x641190*/
  v28 = (*(*v27 + 528LL))(a1: v27, a2: &v192); /*0x6411a8*/
  if ( SHIBYTE(v193) < 0 ) /*0x6411b0*/
    operator delete(a1: v192); /*0x6411b8*/
  sub_6BF7B4(a1: &v192, a2: v26); /*0x6411cc*/
  (*(*v28 + 1304LL))(a1: v28, a2: &v192); /*0x6411e0*/
  if ( SHIBYTE(v193) < 0 ) /*0x6411e8*/
    operator delete(a1: v192); /*0x6411f0*/
  v29 = (*(*v28 + 208LL))(a1: v28); /*0x641200*/
  v30 = sub_640D0C(a1: v29, a2: 100.0); /*0x64120c*/
  (*(*v28 + 200LL))(a1: v28, a2: v30); /*0x64121c*/
  v31 = *(*(*v28 + 160LL))(a1: v28); /*0x641230*/
  sub_6BDFDC(a1: v26, a2: v184); /*0x64123c*/
  v32 = v184[0]; /*0x641240*/
  sub_6BEFA8(a1: v26, a2: v182); /*0x64124c*/
  *&v192 = vadd_f32(vadd_f32(vadd_f32(v31, 3270508544LL), v32), v182[0]); /*0x641268*/
  (*(*v28 + 152LL))(a1: v28, a2: &v192); /*0x64127c*/
  v33 = cocos2d::FadeIn::create(a1: 0.8); /*0x64128c*/
  v34 = cocos2d::EaseCubicActionOut::create(a1: v33); /*0x641294*/
  *&v192 = 3276275712LL; /*0x6412a0*/
  v35 = cocos2d::MoveBy::create(a1: &v192, a2: 0.8); /*0x6412ac*/
  v36 = cocos2d::EaseCubicActionOut::create(a1: v35); /*0x6412b0*/
  v44 = cocos2d::Spawn::create(a1: v34, a2: v37, a3: v38, a4: v39, a5: v40, a6: v41, a7: v42, a8: v43, a9: v36); /*0x6412bc*/
  (*(*v28 + 904LL))(a1: v28, a2: v44); /*0x6412d0*/
  v45 = *v11; /*0x6412d4*/
  idk_like_strcpy(a1: &v192, __s: "scoreLabel"); /*0x6412e4*/
  v46 = (*(*v45 + 528LL))(a1: v45, a2: &v192); /*0x6412fc*/
  if ( SHIBYTE(v193) < 0 ) /*0x641304*/
    operator delete(a1: v192); /*0x64130c*/
  Score = GameResult::getScore(a1: *v4); /*0x641314*/
  sub_790D38(a1: Score, a2: v48, a3: &v192); /*0x64131c*/
  cocos2d::ui::Text::setString(a1: v46, a2: &v192); /*0x641328*/
  if ( SHIBYTE(v193) < 0 ) /*0x641330*/
    operator delete(a1: v192); /*0x641338*/
  if ( sub_62B7C0(a1: *v4) ) /*0x641340*/
  {
    cocos2d::Color4B::Color4B(result: v184, a2: 15, a3: 113, a4: 133, a5: 255); /*0x64135c*/
    cocos2d::Size::Size(result: &v192, a2: 3.0, a3: -3.0); /*0x64136c*/
    cocos2d::ui::Text::enableShadow(a1: v46); /*0x641380*/
    v49 = sub_7A7F24(); /*0x641384*/
    (*(*v46 + 904LL))(a1: v46, a2: v49); /*0x641398*/
  }
  if ( *(*v4 + 148) != 0 ) /*0x6413a4*/
  {
    v50 = *v11; /*0x6413a8*/
    idk_like_strcpy(a1: &v192, __s: "notsaved_back"); /*0x6413b8*/
    v51 = (*(*v50 + 528LL))(a1: v50, a2: &v192); /*0x6413d0*/
    if ( SHIBYTE(v193) < 0 ) /*0x6413d8*/
      operator delete(a1: v192); /*0x6413e0*/
    (*(*v51 + 336LL))(a1: v51, a2: 1); /*0x6413f4*/
    v52 = (*(*v46 + 328LL))(a1: v46); /*0x641404*/
    (*(*v51 + 80LL))(a1: v51, a2: *v52); /*0x641418*/
    v53 = *v11; /*0x64141c*/
    idk_like_strcpy(a1: &v192, __s: "notsaved_text"); /*0x64142c*/
    v54 = (*(*v53 + 528LL))(a1: v53, a2: &v192); /*0x641440*/
    (*(*v54 + 336LL))(a1: v54, a2: 1); /*0x641450*/
    if ( SHIBYTE(v193) < 0 ) /*0x641458*/
      operator delete(a1: v192); /*0x641460*/
  }
  if ( TopResult != 0 ) /*0x641464*/
    TopResult = GameResult::getScore(a1: TopResult); /*0x641470*/
  v55 = GameResult::getScore(a1: *v4); /*0x64147c*/
  v56 = *v11; /*0x641480*/
  idk_like_strcpy(a1: &v192, __s: "pastScoreLabel"); /*0x641490*/
  v58 = (*(*v56 + 528LL))(a1: v56, a2: &v192); /*0x6414a8*/
  if ( TopResult != 0 ) /*0x6414ac*/
    sub_790D38(a1: TopResult, a2: v57, a3: v184); /*0x6414b8*/
  else
    idk_like_strcpy(a1: v184, __s: "0"); /*0x6414cc*/
  cocos2d::ui::Text::setString(a1: v58, a2: v184); /*0x6414d8*/
  if ( SHIBYTE(v185) < 0 ) /*0x6414e0*/
    operator delete(a1: v184[0]); /*0x6414e8*/
  if ( SHIBYTE(v193) < 0 ) /*0x6414f0*/
    operator delete(a1: v192); /*0x6414f8*/
  v59 = "+"; /*0x641504*/
  if ( GameResult::getScore(a1: *v4) != TopResult && GameResult::getScore(a1: *v4) <= TopResult ) /*0x641528*/
    v59 = "-"; /*0x641528*/
  v60 = *v11; /*0x64152c*/
  idk_like_strcpy(a1: &v192, __s: "scoreDiffLabel"); /*0x64153c*/
  v61 = (*(*v60 + 528LL))(a1: v60, a2: &v192); /*0x641554*/
  v63 = GameResult::getScore(a1: *v4) - TopResult; /*0x641560*/
  if ( v63 >= 0 ) /*0x641564*/
    v64 = v63; /*0x641564*/
  else
    v64 = -v63; /*0x641564*/
  sub_790D38(a1: v64, a2: v62, a3: v182); /*0x64156c*/
  v65 = std::string::insert(a1: v182, a2: 0, a3: v59); /*0x64157c*/
  v66 = *v65; /*0x641580*/
  v185 = *(v65 + 16); /*0x641588*/
  *v184 = v66; /*0x64158c*/
  *(v65 + 8) = 0; /*0x641590*/
  *(v65 + 16) = 0; /*0x641590*/
  *v65 = 0; /*0x641594*/
  cocos2d::ui::Text::setString(a1: v61, a2: v184); /*0x6415a0*/
  if ( SHIBYTE(v185) < 0 ) /*0x6415a8*/
    operator delete(a1: v184[0]); /*0x6415b0*/
  if ( SHIBYTE(v183) < 0 ) /*0x6415b8*/
    operator delete(a1: v182[0]); /*0x6415c0*/
  if ( SHIBYTE(v193) < 0 ) /*0x6415c8*/
    operator delete(a1: v192); /*0x6415d0*/
  v67 = *v11; /*0x6415d4*/
  idk_like_strcpy(a1: &v192, __s: "scoreSectionHigh"); /*0x6415e4*/
  v68 = (*(*v67 + 528LL))(a1: v67, a2: &v192); /*0x6415fc*/
  if ( SHIBYTE(v193) < 0 ) /*0x641604*/
    operator delete(a1: v192); /*0x64160c*/
  if ( v55 <= TopResult ) /*0x641614*/
  {
    (*(*v68 + 336LL))(a1: v68, a2: 0); /*0x641680*/
  }
  else
  {
    (*(*v68 + 1136LL))(a1: v68, a2: 150); /*0x641628*/
    v69 = cocos2d::FadeTo::create(a1: 255, a2: 2.0); /*0x641638*/
    v70 = cocos2d::FadeTo::create(a1: 150, a2: 2.0); /*0x641644*/
    v78 = cocos2d::Sequence::create(a1: v69, a2: v71, a3: v72, a4: v73, a5: v74, a6: v75, a7: v76, a8: v77, a9: v70); /*0x641650*/
    v79 = cocos2d::RepeatForever::create(a1: v78); /*0x641654*/
    (*(*v68 + 904LL))(a1: v68, a2: v79); /*0x641668*/
  }
  v80 = sub_648C8C(a1: *(*(a1 + 696) + 84LL), a2: *(*(a1 + 696) + 160LL), a3: *(*(a1 + 696) + 133LL), a4: 1); /*0x641698*/
  *(a1 + 760) = v80; /*0x64169c*/
  (*(*v80 + 128LL))(a1: v80, a2: 0.77); /*0x6416b0*/
  v81 = *(a1 + 704); /*0x6416b4*/
  idk_like_strcpy(a1: &v192, __s: "hpNode"); /*0x6416c4*/
  v82 = (*(*v81 + 528LL))(a1: v81, a2: &v192); /*0x6416dc*/
  if ( SHIBYTE(v193) < 0 ) /*0x6416e4*/
    operator delete(a1: v192); /*0x6416ec*/
  (*(*v82 + 1160LL))(a1: v82, a2: 1); /*0x641700*/
  (*(*v82 + 488LL))(a1: v82, a2: *(a1 + 760)); /*0x641714*/
  if ( *(*(CoreManager::getCharacterManager() + 48) + 160LL) != 0 ) /*0x641724*/
  {
    CharacterManager = CoreManager::getCharacterManager(); /*0x641728*/
    if ( (*(**(*(CharacterManager + 48) + 160LL) + 88LL))(a1: *(*(CharacterManager + 48) + 160LL)) == 9 ) /*0x641744*/
    {
      v84 = (*(*v82 + 48LL))(a1: v82); /*0x641754*/
      (*(*v82 + 24LL))(a1: v82, a2: (v84 + 1)); /*0x641768*/
    }
  }
  v85 = *(a1 + 760); /*0x64176c*/
  *&v192 = 0x3F80000000000000LL; /*0x641778*/
  (*(*v85 + 296LL))(a1: v85, a2: &v192); /*0x641788*/
  v86 = *(a1 + 760); /*0x64178c*/
  *&v192 = 0; /*0x641790*/
  (*(*v86 + 152LL))(a1: v86, a2: &v192); /*0x6417a0*/
  v87 = *(a1 + 760); /*0x6417a8*/
  v88 = *(a1 + 696); /*0x6417ac*/
  if ( *(a1 + 868) == 13 ) /*0x6417b4*/
  {
    v89 = *(v88 + 116); /*0x6417c0*/
    *(v87 + 716) = 1; /*0x6417c8*/
    *(v87 + 720) = v89; /*0x6417cc*/
  }
  v90 = *(v88 + 40); /*0x6417d0*/
  if ( v90 <= 0 ) /*0x6417d8*/
    v90 = 0; /*0x6417d8*/
  v91 = v90; /*0x6417dc*/
  v92 = *(a1 + 876); /*0x6417e0*/
  v93 = *(v88 + 96); /*0x6417e4*/
  v94 = *(v88 + 132); /*0x6417e8*/
  v95 = GameResult::getScore(a1: v88); /*0x6417ec*/
  HPBar::setHP(a1: v87, a2: v91, a3: v92, a4: v93, a5: v94, a6: v95); /*0x641808*/
  v96 = *(a1 + 704); /*0x64180c*/
  idk_like_strcpy(a1: &v192, __s: "difficultyBacking"); /*0x64181c*/
  v97 = (*(*v96 + 528LL))(a1: v96, a2: &v192); /*0x641834*/
  if ( SHIBYTE(v193) < 0 ) /*0x64183c*/
    operator delete(a1: v192); /*0x641844*/
  switch ( *(*v4 + 80) ) /*0x64186c*/
  {
    case 0: /*0x64186c*/
      idk_like_strcpy(a1: &v192, __s: "layouts/1080/results/max-recall-pst.png"); /*0x64187c*/
      cocos2d::ui::ImageView::loadTexture(result: v97, a2: &v192, a3: 0); /*0x64188c*/
      goto LABEL_91; /*0x641890*/
    case 1: /*0x64186c*/
      idk_like_strcpy(a1: &v192, __s: "layouts/1080/results/max-recall-prs.png"); /*0x64190c*/
      cocos2d::ui::ImageView::loadTexture(result: v97, a2: &v192, a3: 0); /*0x64191c*/
      goto LABEL_91; /*0x64191c*/
    case 2: /*0x64186c*/
      idk_like_strcpy(a1: &v192, __s: "layouts/1080/results/max-recall-ftr.png"); /*0x6418c4*/
      cocos2d::ui::ImageView::loadTexture(result: v97, a2: &v192, a3: 0); /*0x6418d4*/
      goto LABEL_91; /*0x6418d8*/
    case 3: /*0x64186c*/
      idk_like_strcpy(a1: &v192, __s: "layouts/1080/results/max-recall-byd.png"); /*0x6418e8*/
      cocos2d::ui::ImageView::loadTexture(result: v97, a2: &v192, a3: 0); /*0x6418f8*/
      goto LABEL_91; /*0x6418fc*/
    case 4: /*0x64186c*/
      idk_like_strcpy(a1: &v192, __s: "layouts/1080/results/max-recall-etr.png"); /*0x6418a0*/
      cocos2d::ui::ImageView::loadTexture(result: v97, a2: &v192, a3: 0); /*0x6418b0*/
LABEL_91:
      if ( SHIBYTE(v193) < 0 ) /*0x641924*/
        operator delete(a1: v192); /*0x64192c*/
      break; /*0x64192c*/
    default:
      break;
  }
  v98 = *v11; /*0x641930*/
  idk_like_strcpy(a1: &v192, __s: "difficultyLabel"); /*0x641940*/
  v99 = (*(*v98 + 528LL))(a1: v98, a2: &v192); /*0x641958*/
  if ( SHIBYTE(v193) < 0 ) /*0x641960*/
    operator delete(a1: v192); /*0x641968*/
  SongDifficulty::getRatingString(a1: Difficulty, a2: 0); /*0x641978*/
  cocos2d::ui::Text::setString(a1: v99, a2: &v192); /*0x641984*/
  if ( SHIBYTE(v193) < 0 ) /*0x64198c*/
    operator delete(a1: v192); /*0x641994*/
  if ( *(Difficulty + 272) == 0 ) /*0x64199c*/
  {
    v100 = (*(*v99 + 192LL))(a1: v99); /*0x6419ac*/
    (*(*v99 + 184LL))(a1: v99, a2: v100 + 2.0); /*0x6419c4*/
  }
  v101 = sub_7DF884(a1: *(Difficulty + 292)); /*0x6419cc*/
  LOWORD(v184[0]) = v101; /*0x6419d0*/
  BYTE2(v184[0]) = BYTE2(v101); /*0x6419d8*/
  sub_97F574(result: &v192, a2: v184, a3: 255); /*0x6419e8*/
  cocos2d::ui::Text::enableOutline(a1: v99); /*0x6419f8*/
  v102 = *v11; /*0x6419fc*/
  idk_like_strcpy(a1: &v192, __s: "difficultyPlusLabel"); /*0x641a0c*/
  v103 = (*(*v102 + 528LL))(a1: v102, a2: &v192); /*0x641a24*/
  if ( SHIBYTE(v193) < 0 ) /*0x641a2c*/
    operator delete(a1: v192); /*0x641a34*/
  (*(*v103 + 336LL))(a1: v103, a2: *(Difficulty + 276)); /*0x641a48*/
  v104 = sub_7DF884(a1: *(Difficulty + 292)); /*0x641a50*/
  LOWORD(v184[0]) = v104; /*0x641a54*/
  BYTE2(v184[0]) = BYTE2(v104); /*0x641a5c*/
  sub_97F574(result: &v192, a2: v184, a3: 255); /*0x641a6c*/
  cocos2d::ui::Text::enableOutline(a1: v103); /*0x641a7c*/
  v105 = *v11; /*0x641a80*/
  idk_like_strcpy(a1: &v192, __s: "difficultyNameLabel"); /*0x641a90*/
  v106 = (*(*v105 + 528LL))(a1: v105, a2: &v192); /*0x641aa8*/
  if ( SHIBYTE(v193) < 0 ) /*0x641ab0*/
    operator delete(a1: v192); /*0x641ab8*/
  v107 = v184; /*0x641ac4*/
  sub_7DFCEC(a1: *(*v4 + 80), a2: v184); /*0x641acc*/
  if ( v185 >= 0 ) /*0x641ae8*/
    v108 = (v184 + HIBYTE(v185)); /*0x641ae8*/
  else
    v108 = (v184[0] + v184[1]); /*0x641ae8*/
  if ( v185 < 0 ) /*0x641aec*/
    v107 = v184[0]; /*0x641aec*/
  while ( v107 != v108 ) /*0x641af4*/
  {
    *v107 = __toupper(a1: *v107); /*0x641b00*/
    v107 = (v107 + 1); /*0x641b00*/
  }
  cocos2d::ui::Text::setString(a1: v106, a2: v184); /*0x641b10*/
  v109 = sub_7DF884(a1: *(Difficulty + 292)); /*0x641b18*/
  LOWORD(v192) = v109; /*0x641b1c*/
  BYTE2(v192) = BYTE2(v109); /*0x641b24*/
  sub_97F574(result: &v181, a2: &v192, a3: 255); /*0x641b34*/
  sub_934B94(a1: v106, a2: v181); /*0x641b40*/
  v110 = *v11; /*0x641b44*/
  idk_like_strcpy(a1: &v192, __s: "maxComboCountLabel"); /*0x641b54*/
  v112 = (*(*v110 + 528LL))(a1: v110, a2: &v192); /*0x641b6c*/
  if ( SHIBYTE(v193) < 0 ) /*0x641b74*/
    operator delete(a1: v192); /*0x641b7c*/
  v113 = *(*v4 + 96); /*0x641b84*/
  if ( (v113 & 0x80000000) != 0 ) /*0x641b88*/
  {
    (*(*v112 + 336LL))(a1: v112, a2: 0); /*0x641bc4*/
  }
  else
  {
    std::to_string(this: v113, a2: v111); /*0x641b90*/
    cocos2d::ui::Text::setString(a1: v112, a2: &v192); /*0x641b9c*/
    if ( SHIBYTE(v193) < 0 ) /*0x641ba4*/
      operator delete(a1: v192); /*0x641bac*/
  }
  v114 = *v11; /*0x641bc8*/
  idk_like_strcpy(a1: &v192, __s: "shiningPerfectCountLabel"); /*0x641bd8*/
  v116 = (*(*v114 + 528LL))(a1: v114, a2: &v192); /*0x641bf0*/
  *(a1 + 816) = v116; /*0x641bf4*/
  if ( SHIBYTE(v193) < 0 ) /*0x641bfc*/
  {
    operator delete(a1: v192); /*0x641c04*/
    v116 = *(a1 + 816); /*0x641c08*/
  }
  std::to_string(this: *(*v4 + 20), a2: v115); /*0x641c18*/
  v117 = std::string::insert(a1: v182, a2: 0, a3: "+"); /*0x641c2c*/
  v118 = *v117; /*0x641c30*/
  v193 = *(v117 + 16); /*0x641c38*/
  v192 = v118; /*0x641c3c*/
  *(v117 + 8) = 0; /*0x641c40*/
  *(v117 + 16) = 0; /*0x641c40*/
  *v117 = 0; /*0x641c44*/
  cocos2d::ui::Text::setString(a1: v116, a2: &v192); /*0x641c50*/
  if ( SHIBYTE(v193) < 0 ) /*0x641c58*/
    operator delete(a1: v192); /*0x641c60*/
  if ( SHIBYTE(v183) < 0 ) /*0x641c68*/
    operator delete(a1: v182[0]); /*0x641c70*/
  v119 = *v11; /*0x641c74*/
  idk_like_strcpy(a1: &v192, __s: "lateEarlyCountLabel"); /*0x641c84*/
  *(a1 + 824) = (*(*v119 + 528LL))(a1: v119, a2: &v192); /*0x641c9c*/
  if ( SHIBYTE(v193) < 0 ) /*0x641ca4*/
    operator delete(a1: v192); /*0x641cac*/
  v121 = *(*v4 + 100); /*0x641cb4*/
  if ( v121 == -1 || *(*v4 + 104) == -1 ) /*0x641cc8*/
  {
    v148 = *(a1 + 824); /*0x641fd8*/
    idk_like_strcpy(a1: &v192, __s: ""); /*0x641fe8*/
    cocos2d::ui::Text::setString(a1: v148, a2: &v192); /*0x641ff4*/
  }
  else
  {
    std::to_string(this: v121, a2: v120); /*0x641cd0*/
    v122 = std::string::insert(a1: v182, a2: 0, a3: "L"); /*0x641ce4*/
    v124 = *v122; /*0x641ce8*/
    v193 = *(v122 + 16); /*0x641cf0*/
    v192 = v124; /*0x641cf4*/
    *(v122 + 8) = 0; /*0x641cf8*/
    *(v122 + 16) = 0; /*0x641cf8*/
    *v122 = 0; /*0x641cfc*/
    if ( SHIBYTE(v183) < 0 ) /*0x641d04*/
      operator delete(a1: v182[0]); /*0x641d0c*/
    if ( *(*(CoreManager::singleton + 112) + 24LL) != 0 ) /*0x641d1c*/
    {
      std::to_string(this: *(*v4 + 108), a2: v123); /*0x641d2c*/
      v125 = std::string::insert(a1: v177, a2: 0, a3: "(P"); /*0x641d40*/
      v126 = *v125; /*0x641d44*/
      v180 = *(v125 + 16); /*0x641d4c*/
      *v179 = v126; /*0x641d50*/
      *(v125 + 8) = 0; /*0x641d54*/
      *(v125 + 16) = 0; /*0x641d54*/
      *v125 = 0; /*0x641d58*/
      v127 = std::string::append(a1: v179, a2: ")"); /*0x641d68*/
      v128 = *v127; /*0x641d6c*/
      v183 = *(v127 + 16); /*0x641d74*/
      *v182 = v128; /*0x641d78*/
      *(v127 + 8) = 0; /*0x641d7c*/
      *(v127 + 16) = 0; /*0x641d7c*/
      *v127 = 0; /*0x641d80*/
      if ( v183 >= 0 ) /*0x641d98*/
        v129 = v182; /*0x641d98*/
      else
        v129 = v182[0]; /*0x641d98*/
      if ( v183 >= 0 ) /*0x641d9c*/
        v130 = HIBYTE(v183); /*0x641d9c*/
      else
        v130 = v182[1]; /*0x641d9c*/
      std::string::append(a1: &v192, a2: v129, a3: v130); /*0x641da4*/
      if ( SHIBYTE(v183) < 0 ) /*0x641dac*/
        operator delete(a1: v182[0]); /*0x641db4*/
      if ( SHIBYTE(v180) < 0 ) /*0x641dbc*/
        operator delete(a1: v179[0]); /*0x641dc4*/
      if ( SHIBYTE(v178) < 0 ) /*0x641dcc*/
        operator delete(a1: v177[0]); /*0x641dd4*/
    }
    std::to_string(this: *(*v4 + 104), a2: v123); /*0x641de4*/
    v131 = std::string::insert(a1: v179, a2: 0, a3: "E"); /*0x641df8*/
    v133 = *v131; /*0x641dfc*/
    v183 = *(v131 + 16); /*0x641e04*/
    *v182 = v133; /*0x641e08*/
    *(v131 + 8) = 0; /*0x641e0c*/
    *(v131 + 16) = 0; /*0x641e0c*/
    *v131 = 0; /*0x641e10*/
    if ( SHIBYTE(v180) < 0 ) /*0x641e18*/
      operator delete(a1: v179[0]); /*0x641e20*/
    if ( *(*(CoreManager::singleton + 112) + 24LL) != 0 ) /*0x641e30*/
    {
      std::to_string(this: *(*v4 + 112), a2: v132); /*0x641e40*/
      v134 = std::string::insert(a1: &v175, a2: 0, a3: "(P"); /*0x641e54*/
      v135 = *v134; /*0x641e58*/
      v178 = *(v134 + 16); /*0x641e60*/
      *v177 = v135; /*0x641e64*/
      *(v134 + 8) = 0; /*0x641e68*/
      *(v134 + 16) = 0; /*0x641e68*/
      *v134 = 0; /*0x641e6c*/
      v136 = std::string::append(a1: v177, a2: ")"); /*0x641e7c*/
      v137 = *v136; /*0x641e80*/
      v180 = *(v136 + 16); /*0x641e88*/
      *v179 = v137; /*0x641e8c*/
      *(v136 + 8) = 0; /*0x641e90*/
      *(v136 + 16) = 0; /*0x641e90*/
      *v136 = 0; /*0x641e94*/
      if ( v180 >= 0 ) /*0x641eac*/
        v138 = v179; /*0x641eac*/
      else
        v138 = v179[0]; /*0x641eac*/
      if ( v180 >= 0 ) /*0x641eb0*/
        v139 = HIBYTE(v180); /*0x641eb0*/
      else
        v139 = v179[1]; /*0x641eb0*/
      std::string::append(a1: v182, a2: v138, a3: v139); /*0x641eb8*/
      if ( SHIBYTE(v180) < 0 ) /*0x641ec0*/
        operator delete(a1: v179[0]); /*0x641ec8*/
      if ( SHIBYTE(v178) < 0 ) /*0x641ed0*/
        operator delete(a1: v177[0]); /*0x641ed8*/
      if ( v176 < 0 ) /*0x641ee0*/
        operator delete(a1: v175); /*0x641ee8*/
    }
    v140 = *(a1 + 824); /*0x641eec*/
    if ( v193 >= 0 ) /*0x641f00*/
      v141 = HIBYTE(v193); /*0x641f00*/
    else
      v141 = *(&v192 + 1); /*0x641f00*/
    v142 = v177; /*0x641f08*/
    sub_BBFC(a1: v177, a2: v141 + 2); /*0x641f14*/
    if ( v178 < 0 ) /*0x641f24*/
      v142 = v177[0]; /*0x641f24*/
    if ( v141 != 0 ) /*0x641f28*/
    {
      if ( v193 >= 0 ) /*0x641f3c*/
        v143 = &v192; /*0x641f3c*/
      else
        v143 = v192; /*0x641f3c*/
      memmove(__dst: v142, __src: v143, __len: v141); /*0x641f48*/
    }
    strcpy(v142 + v141, "  "); /*0x641f54*/
    if ( v183 >= 0 ) /*0x641f70*/
      v144 = v182; /*0x641f70*/
    else
      v144 = v182[0]; /*0x641f70*/
    if ( v183 >= 0 ) /*0x641f74*/
      v145 = HIBYTE(v183); /*0x641f74*/
    else
      v145 = v182[1]; /*0x641f74*/
    v146 = std::string::append(a1: v177, a2: v144, a3: v145); /*0x641f7c*/
    v147 = *v146; /*0x641f80*/
    v180 = *(v146 + 16); /*0x641f88*/
    *v179 = v147; /*0x641f8c*/
    *(v146 + 8) = 0; /*0x641f90*/
    *(v146 + 16) = 0; /*0x641f90*/
    *v146 = 0; /*0x641f94*/
    cocos2d::ui::Text::setString(a1: v140, a2: v179); /*0x641fa0*/
    if ( SHIBYTE(v180) < 0 ) /*0x641fa8*/
      operator delete(a1: v179[0]); /*0x641fb0*/
    if ( SHIBYTE(v178) < 0 ) /*0x641fb8*/
      operator delete(a1: v177[0]); /*0x641fc0*/
    if ( SHIBYTE(v183) < 0 ) /*0x641fc8*/
      operator delete(a1: v182[0]); /*0x641fd0*/
  }
  if ( SHIBYTE(v193) < 0 ) /*0x641ffc*/
    operator delete(a1: v192); /*0x642004*/
  v149 = *v11; /*0x642008*/
  idk_like_strcpy(a1: &v192, __s: "perfectCountLabel"); /*0x642018*/
  v151 = (*(*v149 + 528LL))(a1: v149, a2: &v192); /*0x642030*/
  if ( SHIBYTE(v193) < 0 ) /*0x642038*/
    operator delete(a1: v192); /*0x642040*/
  std::to_string(this: *(*v4 + 24), a2: v150); /*0x642050*/
  cocos2d::ui::Text::setString(a1: v151, a2: &v192); /*0x64205c*/
  if ( SHIBYTE(v193) < 0 ) /*0x642064*/
    operator delete(a1: v192); /*0x64206c*/
  v152 = *v11; /*0x642070*/
  idk_like_strcpy(a1: v182, __s: "additionalInfoButton"); /*0x642080*/
  v153 = (*(*v152 + 528LL))(a1: v152, a2: v182); /*0x642094*/
  *&v192 = &off_EAD300; /*0x6420a0*/
  *(&v192 + 1) = a1; /*0x6420a0*/
  v194 = &v192; /*0x6420a8*/
  cocos2d::ui::Widget::addTouchEventListener(a1: v153, a2: &v192); /*0x6420b0*/
  if ( &v192 == v194 ) /*0x6420bc*/
  {
    v154 = *(*v194 + 32LL); /*0x6420d4*/
  }
  else
  {
    if ( v194 == 0 ) /*0x6420c0*/
      goto LABEL_190; /*0x6420c0*/
    v154 = *(*v194 + 40LL); /*0x6420c8*/
  }
  v154(); /*0x6420d8*/
LABEL_190:
  if ( SHIBYTE(v183) < 0 ) /*0x6420e0*/
    operator delete(a1: v182[0]); /*0x6420e8*/
  v155 = *v11; /*0x6420ec*/
  idk_like_strcpy(a1: &v192, __s: "nearCountLabel"); /*0x6420fc*/
  v156 = (*(*v155 + 528LL))(a1: v155, a2: &v192); /*0x642114*/
  cocos2d::Color4B::Color4B(result: v182, a2: 178, a3: 126, a4: 101, a5: 255); /*0x64212c*/
  cocos2d::ui::Text::enableOutline(a1: v156); /*0x64213c*/
  if ( SHIBYTE(v193) < 0 ) /*0x642144*/
    operator delete(a1: v192); /*0x64214c*/
  v157 = *v11; /*0x642150*/
  idk_like_strcpy(a1: &v192, __s: "nearCountLabel"); /*0x642160*/
  v158 = (*(*v157 + 528LL))(a1: v157, a2: &v192); /*0x642178*/
  cocos2d::Color4B::Color4B(result: v179, a2: 178, a3: 133, a4: 112, a5: 204); /*0x642190*/
  cocos2d::Size::Size(result: v182, a2: 1.0, a3: -1.0); /*0x6421a0*/
  cocos2d::ui::Text::enableShadow(a1: v158); /*0x6421b4*/
  if ( SHIBYTE(v193) < 0 ) /*0x6421bc*/
    operator delete(a1: v192); /*0x6421c4*/
  v159 = *v11; /*0x6421c8*/
  idk_like_strcpy(a1: &v192, __s: "farLabel-fullnolocalize"); /*0x6421d8*/
  v160 = (*(*v159 + 528LL))(a1: v159, a2: &v192); /*0x6421f0*/
  cocos2d::Color4B::Color4B(result: v182, a2: 178, a3: 126, a4: 101, a5: 255); /*0x642208*/
  cocos2d::ui::Text::enableOutline(a1: v160); /*0x642218*/
  if ( SHIBYTE(v193) < 0 ) /*0x642220*/
    operator delete(a1: v192); /*0x642228*/
  v161 = *v11; /*0x64222c*/
  idk_like_strcpy(a1: &v192, __s: "farLabel-fullnolocalize"); /*0x64223c*/
  v162 = (*(*v161 + 528LL))(a1: v161, a2: &v192); /*0x642254*/
  cocos2d::Color4B::Color4B(result: v179, a2: 178, a3: 133, a4: 112, a5: 204); /*0x64226c*/
  cocos2d::Size::Size(result: v182, a2: 1.0, a3: -1.0); /*0x64227c*/
  cocos2d::ui::Text::enableShadow(a1: v162); /*0x642290*/
  if ( SHIBYTE(v193) < 0 ) /*0x642298*/
    operator delete(a1: v192); /*0x6422a0*/
  v163 = *v11; /*0x6422a4*/
  idk_like_strcpy(a1: &v192, __s: "nearCountLabel"); /*0x6422b4*/
  v164 = (*(*v163 + 528LL))(a1: v163, a2: &v192); /*0x6422cc*/
  std::to_string(this: *(*v4 + 28), a2: v165); /*0x6422dc*/
  cocos2d::ui::Text::setString(a1: v164, a2: v182); /*0x6422e8*/
  if ( SHIBYTE(v183) < 0 ) /*0x6422f0*/
    operator delete(a1: v182[0]); /*0x6422f8*/
  if ( SHIBYTE(v193) < 0 ) /*0x642300*/
    operator delete(a1: v192); /*0x642308*/
  v166 = *v11; /*0x64230c*/
  idk_like_strcpy(a1: &v192, __s: "missCountLabel"); /*0x64231c*/
  v167 = (*(*v166 + 528LL))(a1: v166, a2: &v192); /*0x642334*/
  std::to_string(this: *(*v4 + 36), a2: v168); /*0x642344*/
  cocos2d::ui::Text::setString(a1: v167, a2: v182); /*0x642350*/
  if ( SHIBYTE(v183) < 0 ) /*0x642358*/
    operator delete(a1: v182[0]); /*0x642360*/
  if ( SHIBYTE(v193) < 0 ) /*0x642368*/
    operator delete(a1: v192); /*0x642370*/
  idk_like_strcpy(a1: &v192, __s: "layouts/results/Results.csb"); /*0x642380*/
  *(a1 + 720) = cocos2d::CSLoader::createTimeline(a1: &v192); /*0x642390*/
  if ( SHIBYTE(v193) < 0 ) /*0x642398*/
    operator delete(a1: v192); /*0x6423a0*/
  (*(**v11 + 904LL))(a1: *v11); /*0x6423b4*/
  (*(**(a1 + 720) + 128LL))(a1: *(a1 + 720), a2: 0); /*0x6423c8*/
  v169 = *(a1 + 720); /*0x6423cc*/
  idk_like_strcpy(a1: v173, __s: "in"); /*0x6423dc*/
  v190[0] = &off_EAD380; /*0x6423e8*/
  v190[1] = a1; /*0x6423e8*/
  v191 = v190; /*0x6423f0*/
  (*(*v169 + 280LL))(a1: v169, a2: v173, a3: v190); /*0x642408*/
  if ( v190 == v191 ) /*0x642414*/
  {
    v170 = *(*v191 + 32); /*0x64242c*/
  }
  else
  {
    if ( v191 == 0 ) /*0x642418*/
      goto LABEL_215; /*0x642418*/
    v170 = *(*v191 + 40); /*0x642420*/
  }
  v170(); /*0x642430*/
LABEL_215:
  if ( v174 < 0 ) /*0x642438*/
    operator delete(a1: v173[0]); /*0x642440*/
  *&v192 = &off_EAD400; /*0x64244c*/
  *(&v192 + 1) = a1; /*0x64244c*/
  v194 = &v192; /*0x642454*/
  idk_like_strcpy(a1: v182, __s: "startTimeline"); /*0x642464*/
  cocos2d::Node::scheduleOnce(a1, a2: &v192, a3: v182, a4: 0.3); /*0x64247c*/
  if ( SHIBYTE(v183) < 0 ) /*0x642484*/
    operator delete(a1: v182[0]); /*0x64248c*/
  if ( &v192 == v194 ) /*0x64249c*/
  {
    v171 = *(*v194 + 32LL); /*0x6424b4*/
  }
  else
  {
    if ( v194 == 0 ) /*0x6424a0*/
      goto LABEL_224; /*0x6424a0*/
    v171 = *(*v194 + 40LL); /*0x6424a8*/
  }
  v171(); /*0x6424b8*/
LABEL_224:
  *&v192 = &off_EAD480; /*0x6424bc*/
  v194 = &v192; /*0x6424cc*/
  idk_like_strcpy(a1: v182, __s: "gradeInSound"); /*0x6424dc*/
  cocos2d::Node::scheduleOnce(a1, a2: &v192, a3: v182, a4: 2.7); /*0x6424f4*/
  if ( SHIBYTE(v183) < 0 ) /*0x6424fc*/
    operator delete(a1: v182[0]); /*0x642504*/
  if ( &v192 == v194 ) /*0x642514*/
  {
    v172 = *(*v194 + 32LL); /*0x64252c*/
  }
  else
  {
    if ( v194 == 0 ) /*0x642518*/
      goto LABEL_231; /*0x642518*/
    v172 = *(*v194 + 40LL); /*0x642520*/
  }
  v172(); /*0x642530*/
LABEL_231:
  if ( SHIBYTE(v185) < 0 ) /*0x642538*/
    operator delete(a1: v184[0]); /*0x642540*/
}
void __fastcall updateCharacterStatsFromJson(__int64 *a1)
{
  __int64 *v1; // x19
  unsigned __int64 i; // x20
  __int64 *v3; // x0
  CoreManager *v4; // x0
  int v5; // w19
  _QWORD *CharacterManager; // x0
  __int64 *v7; // x8
  __int64 *v8; // x9
  __int64 v9; // x11
  __int64 v10; // t1
  __int64 *v11; // x0
  __int64 *v12; // x0
  unsigned __int64 v13; // d0
  int v14; // w8
  __int64 v15; // x9
  double v16; // d8
  __int64 *v17; // x0
  __int64 *v18; // x0
  unsigned __int64 v19; // d0
  int v20; // w8
  __int64 v21; // x9
  double v22; // d9
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x9
  __int64 v26; // x11
  __int64 v27; // x10
  __int64 v28; // x11
  int v29; // w12
  int v30; // w13
  __int64 v31; // x12
  __int64 *v32; // x0
  unsigned __int64 v33; // d0
  int v34; // w8
  __int64 v35; // x9
  double v36; // d0
  __int64 *v37; // x0
  unsigned __int64 v38; // d0
  int v39; // w8
  __int64 v40; // x9
  double v41; // d10
  __int64 *v42; // x0
  int v43; // w24
  __int64 *v44; // x0
  __int64 *v45; // x0
  unsigned __int64 v46; // d0
  int v47; // w8
  __int64 *v48; // x10
  __int64 v49; // x9
  double v50; // d11
  __int64 *v51; // x0
  __int64 *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x10
  __int64 v56; // x9
  __int64 v57; // x10
  __int64 v58; // x12
  __int64 v59; // x13
  int v60; // w14
  int v61; // w15
  __int64 v62; // x14
  __int64 *v63; // x19
  unsigned __int64 j; // x24
  __int64 *v65; // x1
  __int64 *v66; // x0
  __int64 v67; // x8
  int v68; // w23
  __int64 *v69; // x0
  __int64 v70; // x8
  __int64 *v71; // x0
  const char *v72; // x26
  size_t v73; // x0
  size_t v74; // x25
  char *v75; // x27
  size_t v76; // x28
  int v77; // w25
  __int64 **v78; // x28
  __int64 **v79; // x27
  int v80; // w8
  __int64 *v81; // x26
  _DWORD *v82; // x0
  unsigned __int64 v83; // x10
  __int64 v84; // x12
  __int64 v85; // x13
  int v86; // w14
  int v87; // w15
  __int64 v88; // x14
  __int64 *v89; // x0
  __int64 v90; // x10
  _BOOL4 v91; // w26
  __int64 v92; // x12
  __int64 v93; // x13
  int v94; // w14
  int v95; // w15
  __int64 v96; // x14
  __int64 *v97; // x0
  __int64 v98; // x10
  _BOOL4 v99; // w27
  __int64 v100; // x11
  __int64 v101; // x10
  int v102; // w12
  int v103; // w13
  __int64 v104; // x12
  char v105; // w25
  float v106; // s2
  float v107; // s1
  int v108; // w1
  float v109; // s0
  __int64 v110; // x8
  __int64 v111; // x10
  __int64 v112; // x9
  __int64 v113; // x11
  __int64 v114; // x10
  __int64 v115; // x11
  int v116; // w12
  int v117; // w13
  __int64 v118; // x12
  __int64 v119; // x28
  unsigned __int64 k; // x26
  __int64 v121; // x8
  __int64 *v122; // x0
  char *v123; // x9
  int v124; // w27
  void *v125; // x23
  signed __int64 v126; // x24
  __int64 v127; // x21
  unsigned __int64 v128; // x9
  __int64 v129; // x8
  unsigned __int64 v130; // x22
  char *v131; // x25
  char *v132; // x19
  char *v133; // x19
  char *v134; // x23
  char *v135; // x25
  signed __int64 v136; // x0
  __int64 v137; // x19
  char *v138; // x0
  signed __int64 v139; // x25
  char *v140; // x24
  __int64 v141; // x8
  __int64 *v142; // x0
  char v143; // w12
  __int64 *v144; // x8
  const char *v145; // x11
  __int64 v146; // x0
  __int64 v147; // x9
  __int64 v148; // x10
  const char *v149; // x23
  __int64 v150; // x8
  __int64 v151; // x10
  int v152; // w11
  int v153; // w12
  __int64 v154; // x11
  __int64 *v155; // x0
  const char *v156; // x24
  size_t v157; // x0
  size_t v158; // x25
  char *v159; // x26
  size_t v160; // x27
  unsigned __int64 v161; // x9
  _BOOL4 v162; // w19
  size_t v163; // x0
  size_t v164; // x23
  char *v165; // x25
  size_t v166; // x0
  size_t v167; // x24
  char *v168; // x25
  size_t v169; // x26
  void *v170; // x0
  size_t v171; // x26
  int v172; // [xsp+34h] [xbp-17Ch]
  int v173; // [xsp+38h] [xbp-178h]
  _BOOL4 v174; // [xsp+38h] [xbp-178h]
  int v175; // [xsp+3Ch] [xbp-174h]
  _BOOL4 v176; // [xsp+3Ch] [xbp-174h]
  __int64 v177; // [xsp+40h] [xbp-170h]
  _QWORD v179[2]; // [xsp+60h] [xbp-150h] BYREF
  void *v180; // [xsp+70h] [xbp-140h]
  _QWORD v181[2]; // [xsp+78h] [xbp-138h] BYREF
  void *v182; // [xsp+88h] [xbp-128h]
  void *v183; // [xsp+90h] [xbp-120h] BYREF
  void *v184; // [xsp+98h] [xbp-118h]
  char *v185; // [xsp+A0h] [xbp-110h]
  void *v186; // [xsp+A8h] [xbp-108h]
  char *v187; // [xsp+B0h] [xbp-100h]
  char *v188; // [xsp+B8h] [xbp-F8h]
  _QWORD **v189; // [xsp+C0h] [xbp-F0h] BYREF
  _QWORD *v190[2]; // [xsp+C8h] [xbp-E8h] BYREF
  _QWORD v191[2]; // [xsp+D8h] [xbp-D8h] BYREF
  void *v192; // [xsp+E8h] [xbp-C8h]
  int *v193; // [xsp+F0h] [xbp-C0h] BYREF
  __int64 **v194; // [xsp+F8h] [xbp-B8h] BYREF
  __int64 v195; // [xsp+100h] [xbp-B0h]
  const char *v196; // [xsp+108h] [xbp-A8h] BYREF
  __int64 v197; // [xsp+110h] [xbp-A0h]
  void *v198; // [xsp+118h] [xbp-98h]
  __int64 v199; // [xsp+120h] [xbp-90h]

  v199 = *(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40); /*0x13cd140*/
  if ( *(a1 + 2) )
  {
    v1 = a1; /*0x13cd184*/
    for ( i = 0LL; i < *(v1 + 2); ++i )
    {
      v3 = (*v1 + 24 * i); /*0x13cd1d0*/
      LODWORD(a1: v198) = 1048581; /*0x13cd1d8*/
      v196 = "character_id"; /*0x13cd1dc*/
      v197 = 12LL; /*0x13cd1dc*/
      v4 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd1e4*/
             a1: v3,
             a2: &v196);
      v5 = *v4; /*0x13cd1e8*/
      CharacterManager = CoreManager::getCharacterManager(this: v4); /*0x13cd1ec*/
      v7 = CharacterManager[4]; /*0x13cd1f0*/
      v8 = CharacterManager[5]; /*0x13cd1f0*/
      if ( v7 == v8 ) /*0x13cd1f8*/
      {
LABEL_8:
        v9 = CharacterManager[8]; /*0x13cd214*/
      }
      else
      {
        while ( 1 ) /*0x13cd1fc*/
        {
          v10 = *v7++; /*0x13cd1fc*/
          v9 = v10; /*0x13cd1fc*/
          if ( *(v10 + 12) == v5 ) /*0x13cd208*/
            break; /*0x13cd208*/
          if ( v8 == v7 ) /*0x13cd210*/
            goto LABEL_8; /*0x13cd210*/
        }
      }
      v1 = a1; /*0x13cd218*/
      if ( !v9 ) /*0x13cd21c*/
        continue; /*0x13cd21c*/
      v11 = (*a1 + 24 * i); /*0x13cd230*/
      v177 = v9; /*0x13cd238*/
      LODWORD(a1: v198) = 1048581; /*0x13cd23c*/
      v196 = "frag"; /*0x13cd240*/
      v197 = 4LL; /*0x13cd240*/
      v12 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd248*/
              a1: v11,
              a2: &v196);
      v14 = *(v12 + 4); /*0x13cd24c*/
      if ( (v14 & 0x4000) != 0 ) /*0x13cd250*/
      {
        v16 = *v12; /*0x13cd26c*/
      }
      else if ( (v14 & 0x400) != 0 ) /*0x13cd254*/
      {
        v16 = *v12; /*0x13cd27c*/
      }
      else if ( (v14 & 0x800) != 0 ) /*0x13cd258*/
      {
        LODWORD(a1: v13) = *v12; /*0x13cd284*/
        v16 = v13; /*0x13cd288*/
      }
      else
      {
        v15 = *v12; /*0x13cd25c*/
        if ( (v14 & 0x1000) != 0 ) /*0x13cd260*/
          v16 = v15; /*0x13cd290*/
        else
          v16 = v15; /*0x13cd264*/
      }
      v17 = (*a1 + 24 * i); /*0x13cd2a4*/
      LODWORD(a1: v198) = 1048581; /*0x13cd2ac*/
      v196 = "prog"; /*0x13cd2b0*/
      v197 = 4LL; /*0x13cd2b0*/
      v18 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd2b8*/
              a1: v17,
              a2: &v196);
      v20 = *(v18 + 4); /*0x13cd2bc*/
      if ( (v20 & 0x4000) != 0 ) /*0x13cd2c0*/
      {
        v22 = *v18; /*0x13cd2dc*/
      }
      else if ( (v20 & 0x400) != 0 ) /*0x13cd2c4*/
      {
        v22 = *v18; /*0x13cd2ec*/
      }
      else if ( (v20 & 0x800) != 0 ) /*0x13cd2c8*/
      {
        LODWORD(a1: v19) = *v18; /*0x13cd2f4*/
        v22 = v19; /*0x13cd2f8*/
      }
      else
      {
        v21 = *v18; /*0x13cd2cc*/
        if ( (v20 & 0x1000) != 0 ) /*0x13cd2d0*/
          v22 = v21; /*0x13cd300*/
        else
          v22 = v21; /*0x13cd2d4*/
      }
      v23 = *a1; /*0x13cd304*/
      v24 = *a1 + 24 * i; /*0x13cd30c*/
      v25 = *v24; /*0x13cd310*/
      v26 = *(v24 + 8); /*0x13cd314*/
      v27 = *v24 + 48 * v26; /*0x13cd31c*/
      if ( v26 )
      {
        v28 = 48 * v26; /*0x13cd328*/
        while ( 1 )
        {
          v29 = *(v25 + 16); /*0x13cd340*/
          v30 = 15 - *(v25 + 15); /*0x13cd34c*/
          if ( (v29 & 0x400000) == 0 ) /*0x13cd354*/
            v30 = *(v25 + 8); /*0x13cd354*/
          if ( v30 == 12 )
          {
            v31 = (v29 & 0x400000) != 0 ? v25 : *v25;
            if ( v31 == "prog_tempest" || !(*v31 ^ 0x6D65745F676F7270LL | *(v31 + 8) ^ 0x74736570LL) ) /*0x13cd3a4*/
              break; /*0x13cd3a4*/
          }
          v28 -= 48LL; /*0x13cd330*/
          v25 += 48LL; /*0x13cd334*/
          if ( !v28 ) /*0x13cd338*/
          {
            v25 = v27; /*0x13cd3b0*/
            break; /*0x13cd3b0*/
          }
        }
      }
      if ( v27 != v25 ) /*0x13cd3b8*/
      {
        v196 = "prog_tempest"; /*0x13cd3c4*/
        v197 = 12LL; /*0x13cd3c4*/
        LODWORD(a1: v198) = 1048581; /*0x13cd3d0*/
        v32 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd3d8*/
                a1: v24,
                a2: &v196);
        v34 = *(v32 + 4); /*0x13cd3dc*/
        if ( (v34 & 0x4000) != 0 ) /*0x13cd3e0*/
        {
          v36 = *v32; /*0x13cd3fc*/
        }
        else if ( (v34 & 0x400) != 0 ) /*0x13cd3e4*/
        {
          v36 = *v32; /*0x13cd40c*/
        }
        else if ( (v34 & 0x800) != 0 ) /*0x13cd3e8*/
        {
          LODWORD(a1: v33) = *v32; /*0x13cd414*/
          v36 = v33; /*0x13cd418*/
        }
        else
        {
          v35 = *v32; /*0x13cd3ec*/
          if ( (v34 & 0x1000) != 0 ) /*0x13cd3f0*/
            v36 = v35; /*0x13cd420*/
          else
            v36 = v35; /*0x13cd3f4*/
        }
        v23 = *a1; /*0x13cd424*/
        v22 = v22 - v36; /*0x13cd428*/
      }
      v196 = "overdrive"; /*0x13cd438*/
      v197 = 9LL; /*0x13cd438*/
      LODWORD(a1: v198) = 1048581; /*0x13cd444*/
      v37 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd44c*/
              a1: (v23 + 24 * i),
              a2: &v196);
      v39 = *(v37 + 4); /*0x13cd450*/
      if ( (v39 & 0x4000) != 0 ) /*0x13cd454*/
      {
        v41 = *v37; /*0x13cd470*/
      }
      else if ( (v39 & 0x400) != 0 ) /*0x13cd458*/
      {
        v41 = *v37; /*0x13cd480*/
      }
      else if ( (v39 & 0x800) != 0 ) /*0x13cd45c*/
      {
        LODWORD(a1: v38) = *v37; /*0x13cd488*/
        v41 = v38; /*0x13cd48c*/
      }
      else
      {
        v40 = *v37; /*0x13cd460*/
        if ( (v39 & 0x1000) != 0 ) /*0x13cd464*/
          v41 = v40; /*0x13cd494*/
        else
          v41 = v40; /*0x13cd468*/
      }
      v42 = (*a1 + 24 * i); /*0x13cd4b0*/
      LODWORD(a1: v198) = 1048581; /*0x13cd4bc*/
      v196 = "level"; /*0x13cd4c0*/
      v197 = 5LL; /*0x13cd4c0*/
      v43 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd4d0*/
               a1: v42,
               a2: &v196);
      v44 = (*a1 + 24 * i); /*0x13cd4dc*/
      LODWORD(a1: v198) = 1048581; /*0x13cd4e8*/
      v196 = "exp"; /*0x13cd4ec*/
      v197 = 3LL; /*0x13cd4ec*/
      v45 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd4f4*/
              a1: v44,
              a2: &v196);
      v47 = *(v45 + 4); /*0x13cd4f8*/
      if ( (v47 & 0x4000) != 0 ) /*0x13cd4fc*/
      {
        v50 = *v45; /*0x13cd51c*/
        v48 = a1; /*0x13cd520*/
      }
      else
      {
        v48 = a1; /*0x13cd500*/
        if ( (v47 & 0x400) != 0 ) /*0x13cd504*/
        {
          v50 = *v45; /*0x13cd530*/
        }
        else if ( (v47 & 0x800) != 0 ) /*0x13cd508*/
        {
          LODWORD(a1: v46) = *v45; /*0x13cd538*/
          v50 = v46; /*0x13cd53c*/
        }
        else
        {
          v49 = *v45; /*0x13cd50c*/
          if ( (v47 & 0x1000) != 0 ) /*0x13cd510*/
            v50 = v49; /*0x13cd544*/
          else
            v50 = v49; /*0x13cd514*/
        }
      }
      v51 = (*v48 + 24 * i); /*0x13cd55c*/
      LODWORD(a1: v198) = 1048581; /*0x13cd568*/
      v196 = "skill_unlock_level"; /*0x13cd56c*/
      v197 = 18LL; /*0x13cd56c*/
      v52 = v48; /*0x13cd570*/
      v175 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd58c*/
                a1: v51,
                a2: &v196);
      v53 = *v52; /*0x13cd590*/
      LODWORD(a1: v198) = 1048581; /*0x13cd594*/
      v196 = "char_type"; /*0x13cd598*/
      v197 = 9LL; /*0x13cd598*/
      v173 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd5bc*/
                a1: (v53 + 24 * i),
                a2: &v196);
      v194 = 0LL; /*0x13cd5d0*/
      v195 = 0LL; /*0x13cd5d0*/
      v193 = &v194; /*0x13cd5d4*/
      v54 = *v52; /*0x13cd5d8*/
      v55 = *v52 + 24 * i; /*0x13cd5e8*/
      v56 = *v55; /*0x13cd5ec*/
      v57 = *(v55 + 8); /*0x13cd5f0*/
      v58 = v56; /*0x13cd5fc*/
      if ( v57 )
      {
        v59 = 48 * v57; /*0x13cd618*/
        v58 = v56; /*0x13cd61c*/
        while ( 1 )
        {
          v60 = *(v58 + 16); /*0x13cd634*/
          v61 = 15 - *(v58 + 15); /*0x13cd640*/
          if ( (v60 & 0x400000) == 0 ) /*0x13cd648*/
            v61 = *(v58 + 8); /*0x13cd648*/
          if ( v61 == 11 )
          {
            v62 = (v60 & 0x400000) != 0 ? v58 : *v58;
            if ( v62 == "uncap_cores" || !(*v62 ^ 0x6F635F7061636E75LL | *(v62 + 3) ^ 0x7365726F635F7061LL) ) /*0x13cd680*/
              break; /*0x13cd680*/
          }
          v59 -= 48LL; /*0x13cd624*/
          v58 += 48LL; /*0x13cd628*/
          if ( !v59 ) /*0x13cd62c*/
          {
            v58 = v56 + 48LL * v57; /*0x13cd68c*/
            break; /*0x13cd68c*/
          }
        }
      }
      v63 = a1; /*0x13cd690*/
      if ( v56 + 48LL * v57 == v58 ) /*0x13cd698*/
        goto LABEL_114; /*0x13cd698*/
      v172 = v43; /*0x13cd69c*/
      for ( j = 0LL; ; ++j ) /*0x13cd6a0*/
      {
        v196 = "uncap_cores"; /*0x13cd6dc*/
        v197 = 11LL; /*0x13cd6dc*/
        LODWORD(a1: v198) = 1048581; /*0x13cd6e4*/
        v66 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd6f0*/
                a1: (v54 + 24 * i),
                a2: &v196);
        v54 = *a1; /*0x13cd6f8*/
        if ( j >= *(v66 + 2) ) /*0x13cd700*/
          break; /*0x13cd700*/
        v196 = "uncap_cores"; /*0x13cd710*/
        v197 = 11LL; /*0x13cd710*/
        LODWORD(a1: v198) = 1048581; /*0x13cd718*/
        v67 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd728*/
                 a1: (v54 + 24 * i),
                 a2: &v196);
        LODWORD(a1: v198) = 1048581; /*0x13cd734*/
        v196 = "amount"; /*0x13cd744*/
        v197 = 6LL; /*0x13cd744*/
        v68 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd758*/
                 a1: (v67 + 24 * j),
                 a2: &v196);
        v69 = (*a1 + 24 * i); /*0x13cd764*/
        LODWORD(a1: v198) = 1048581; /*0x13cd76c*/
        v196 = "uncap_cores"; /*0x13cd770*/
        v197 = 11LL; /*0x13cd770*/
        v70 = *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd780*/
                 a1: v69,
                 a2: &v196);
        LODWORD(a1: v198) = 1048581; /*0x13cd78c*/
        v196 = "core_type"; /*0x13cd79c*/
        v197 = 9LL; /*0x13cd79c*/
        v71 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd7a8*/
                a1: (v70 + 24 * j),
                a2: &v196);
        if ( (v71[2] & 0x400000) != 0 ) /*0x13cd7b8*/
          v72 = v71; /*0x13cd7b8*/
        else
          v72 = *v71; /*0x13cd7b8*/
        v73 = strlen(s: v72); /*0x13cd7c0*/
        if ( v73 >= 0xFFFFFFFFFFFFFFF0LL ) /*0x13cd7c8*/
          std::__basic_string_common<true>::__throw_length_error(); /*0x13ce260*/
        v74 = v73; /*0x13cd7cc*/
        if ( v73 >= 0x17 ) /*0x13cd7d4*/
        {
          v76 = (v73 + 16) & 0xFFFFFFFFFFFFFFF0LL; /*0x13cd7f0*/
          v75 = operator new(a1: v76); /*0x13cd800*/
          v191[1] = v74; /*0x13cd804*/
          v192 = v75; /*0x13cd804*/
          v191[0] = v76 | 1; /*0x13cd808*/
LABEL_97:
          memcpy(dest: v75, src: v72, n: v74); /*0x13cd80c*/
          goto LABEL_98; /*0x13cd818*/
        }
        v75 = v191 + 1; /*0x13cd7d8*/
        LOBYTE(a1: v191[0]) = 2 * v73; /*0x13cd7e0*/
        if ( v73 ) /*0x13cd7e4*/
          goto LABEL_97; /*0x13cd7e4*/
LABEL_98:
        v75[v74] = 0; /*0x13cd81c*/
        v77 = RewardNodeCore::coreTypeIntForTypeString(a1: v191); /*0x13cd82c*/
        if ( (v191[0] & 1) != 0 ) /*0x13cd830*/
          operator delete(a1: v192); /*0x13cd838*/
        v78 = v194; /*0x13cd83c*/
        if ( v194 ) /*0x13cd840*/
        {
          v79 = &v194; /*0x13cd844*/
          while ( 1 ) /*0x13cd850*/
          {
            while ( 1 ) /*0x13cd848*/
            {
              v80 = *(v78 + 7); /*0x13cd848*/
              if ( v77 < v80 ) /*0x13cd850*/
                break; /*0x13cd850*/
              if ( v80 >= v77 ) /*0x13cd86c*/
                goto LABEL_109; /*0x13cd86c*/
              v79 = v78 + 1; /*0x13cd874*/
              if ( !v78[1] ) /*0x13cd874*/
                goto LABEL_109; /*0x13cd878*/
              v78 = v78[1]; /*0x13cd87c*/
            }
            if ( !*v78 ) /*0x13cd854*/
              break; /*0x13cd854*/
            v79 = v78; /*0x13cd85c*/
            v78 = *v78; /*0x13cd860*/
          }
          v79 = v78; /*0x13cd8c4*/
LABEL_110:
          v82 = operator new(a1: 0x28uLL); /*0x13cd894*/
          v82[7] = v77; /*0x13cd89c*/
          v82[8] = 0; /*0x13cd89c*/
          *v82 = 0LL; /*0x13cd8a0*/
          *(v82 + 1) = 0LL; /*0x13cd8a0*/
          *(v82 + 2) = v78; /*0x13cd8a4*/
          *v79 = v82; /*0x13cd8a8*/
          v81 = v82; /*0x13cd8b0*/
          if ( *v193 ) /*0x13cd8b4*/
          {
            v193 = *v193; /*0x13cd6a8*/
            v65 = *v79; /*0x13cd6ac*/
          }
          else
          {
            v65 = v82; /*0x13cd8bc*/
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void *> *>(result: v194, a2: v65); /*0x13cd6b4*/
          ++v195; /*0x13cd6c0*/
          goto LABEL_87; /*0x13cd6c0*/
        }
        v79 = &v194; /*0x13cd884*/
        v78 = &v194; /*0x13cd888*/
LABEL_109:
        v81 = *v79; /*0x13cd88c*/
        if ( !*v79 ) /*0x13cd88c*/
          goto LABEL_110; /*0x13cd890*/
LABEL_87:
        *(v81 + 8) = v68; /*0x13cd6c4*/
        v54 = *a1; /*0x13cd6c8*/
      }
      v83 = v54 + 24 * i; /*0x13cd8d4*/
      v56 = *v83; /*0x13cd8d8*/
      v57 = *(v83 + 8); /*0x13cd8dc*/
      v43 = v172; /*0x13cd8e4*/
LABEL_114:
      v84 = v56; /*0x13cd8f4*/
      if ( v57 )
      {
        v85 = 48 * v57; /*0x13cd908*/
        v84 = v56; /*0x13cd90c*/
        while ( 1 )
        {
          v86 = *(v84 + 16); /*0x13cd924*/
          v87 = 15 - *(v84 + 15); /*0x13cd930*/
          if ( (v86 & 0x400000) == 0 ) /*0x13cd938*/
            v87 = *(v84 + 8); /*0x13cd938*/
          if ( v87 == 11 )
          {
            v88 = (v86 & 0x400000) != 0 ? v84 : *v84;
            if ( v88 == "is_uncapped" || !(*v88 ^ 0x7061636E755F7369LL | *(v88 + 3) ^ 0x6465707061636E75LL) ) /*0x13cd980*/
              break; /*0x13cd980*/
          }
          v85 -= 48LL; /*0x13cd914*/
          v84 += 48LL; /*0x13cd918*/
          if ( !v85 ) /*0x13cd91c*/
            goto LABEL_127; /*0x13cd91c*/
        }
      }
      if ( v56 + 48 * v57 == v84 ) /*0x13cd98c*/
      {
LABEL_127:
        v91 = 0; /*0x13cd9f0*/
      }
      else
      {
        v196 = "is_uncapped"; /*0x13cd99c*/
        v197 = 11LL; /*0x13cd99c*/
        LODWORD(a1: v198) = 1048581; /*0x13cd9a4*/
        v89 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cd9b0*/
                a1: (v54 + 24 * i),
                a2: &v196);
        v54 = *a1; /*0x13cd9b4*/
        v90 = *a1 + 24 * i; /*0x13cd9c4*/
        v56 = *v90; /*0x13cd9c8*/
        v57 = *(v90 + 8); /*0x13cd9cc*/
        v91 = *(v89 + 4) == 258; /*0x13cd9d8*/
      }
      v92 = v56; /*0x13cd9fc*/
      if ( v57 )
      {
        v93 = 48 * v57; /*0x13cda08*/
        v92 = v56; /*0x13cda0c*/
        while ( 1 )
        {
          v94 = *(v92 + 16); /*0x13cda24*/
          v95 = 15 - *(v92 + 15); /*0x13cda30*/
          if ( (v94 & 0x400000) == 0 ) /*0x13cda38*/
            v95 = *(v92 + 8); /*0x13cda38*/
          if ( v95 == 20 )
          {
            v96 = (v94 & 0x400000) != 0 ? v92 : *v92;
            if ( v96 == "is_uncapped_override" /*0x13cda90*/
              || !(*v96 ^ 0x7061636E755F7369LL | *(v96 + 8) ^ 0x7265766F5F646570LL | *(v96 + 16) ^ 0x65646972LL) )
            {
              break; /*0x13cda90*/
            }
          }
          v93 -= 48LL; /*0x13cda14*/
          v92 += 48LL; /*0x13cda18*/
          if ( !v93 ) /*0x13cda1c*/
            goto LABEL_141; /*0x13cda1c*/
        }
      }
      if ( v56 + 48 * v57 == v92 ) /*0x13cda9c*/
      {
LABEL_141:
        v99 = 0; /*0x13cdaf4*/
      }
      else
      {
        v196 = "is_uncapped_override"; /*0x13cdaac*/
        v197 = 20LL; /*0x13cdaac*/
        LODWORD(a1: v198) = 1048581; /*0x13cdab4*/
        v97 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdac0*/
                a1: (v54 + 24 * i),
                a2: &v196);
        v54 = *a1; /*0x13cdac4*/
        v98 = *a1 + 24 * i; /*0x13cdad0*/
        v56 = *v98; /*0x13cdad4*/
        v57 = *(v98 + 8); /*0x13cdad8*/
        v99 = *(v97 + 4) == 258; /*0x13cdae0*/
      }
      v100 = v56 + 48 * v57; /*0x13cdafc*/
      if ( v57 )
      {
        v101 = 48 * v57; /*0x13cdb08*/
        while ( 1 )
        {
          v102 = *(v56 + 16); /*0x13cdb20*/
          v103 = 15 - *(v56 + 15); /*0x13cdb2c*/
          if ( (v102 & 0x400000) == 0 ) /*0x13cdb34*/
            v103 = *(v56 + 8); /*0x13cdb34*/
          if ( v103 == 20 )
          {
            v104 = (v102 & 0x400000) != 0 ? v56 : *v56;
            if ( v104 == "skill_requires_uncap" /*0x13cdb9c*/
              || !(*v104 ^ 0x65725F6C6C696B73LL | *(v104 + 8) ^ 0x755F736572697571LL | *(v104 + 16) ^ 0x7061636ELL) )
            {
              break; /*0x13cdb9c*/
            }
          }
          v101 -= 48LL; /*0x13cdb10*/
          v56 += 48LL; /*0x13cdb14*/
          if ( !v101 ) /*0x13cdb18*/
            goto LABEL_155; /*0x13cdb18*/
        }
      }
      if ( v100 == v56 ) /*0x13cdba8*/
      {
LABEL_155:
        v105 = 0; /*0x13cdbec*/
      }
      else
      {
        v196 = "skill_requires_uncap"; /*0x13cdbb8*/
        v197 = 20LL; /*0x13cdbb8*/
        LODWORD(a1: v198) = 1048581; /*0x13cdbc0*/
        v105 = *(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdbd8*/
                   a1: (v54 + 24 * i),
                   a2: &v196)
               + 4) == 258;
      }
      v190[0] = 0LL; /*0x13cdbf8*/
      v190[1] = 0LL; /*0x13cdbf8*/
      v189 = v190; /*0x13cdbfc*/
      std::map<int,int>::insert<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<int,int>,std::__tree_node<std::__value_type<int,int>,void *> *,long>>>( /*0x13cdc08*/
        result: &v189,
        a2: v193,
        a3: &v194);
      if ( (v173 - 1) >= 3 ) /*0x13cdc24*/
        v108 = 0; /*0x13cdc24*/
      else
        v108 = v173; /*0x13cdc24*/
      v109 = v16; /*0x13cdc28*/
      v107 = v22; /*0x13cdc18*/
      v106 = v41; /*0x13cdc14*/
      Character::setStats( /*0x13cdc40*/
        a1: v177,
        a2: v108,
        a3: v50,
        a4: v43,
        a5: v175,
        a6: v105,
        a7: &v189,
        a8: v109,
        a9: v107,
        a10: v106);
      std::__tree<std::__value_type<int,int>,std::__map_value_compare<int,std::__value_type<int,int>,std::less<int>,true>,std::allocator<std::__value_type<int,int>>>::destroy( /*0x13cdc4c*/
        a1: &v189,
        a2: v190[0]);
      *(v177 + 145) = v91; /*0x13cdc50*/
      *(v177 + 146) = v99; /*0x13cdc54*/
      v186 = 0LL; /*0x13cdc58*/
      v187 = 0LL; /*0x13cdc58*/
      v188 = 0LL; /*0x13cdc5c*/
      v110 = *a1; /*0x13cdc60*/
      v111 = *a1 + 24 * i; /*0x13cdc68*/
      v112 = *v111; /*0x13cdc6c*/
      v113 = *(v111 + 8); /*0x13cdc70*/
      v114 = *v111 + 48 * v113; /*0x13cdc78*/
      if ( v113 )
      {
        v115 = 48 * v113; /*0x13cdc88*/
        while ( 1 )
        {
          v116 = *(v112 + 16); /*0x13cdca8*/
          v117 = 15 - *(v112 + 15); /*0x13cdcb4*/
          if ( (v116 & 0x400000) == 0 ) /*0x13cdcbc*/
            v117 = *(v112 + 8); /*0x13cdcbc*/
          if ( v117 == 5 )
          {
            v118 = (v116 & 0x400000) != 0 ? v112 : *v112;
            if ( v118 == "voice" || !(*v118 ^ 0x63696F76 | *(v118 + 4) ^ 0x65) ) /*0x13cdcf4*/
              break; /*0x13cdcf4*/
          }
          v115 -= 48LL; /*0x13cdc98*/
          v112 += 48LL; /*0x13cdc9c*/
          if ( !v115 ) /*0x13cdca0*/
            goto LABEL_191; /*0x13cdca0*/
        }
      }
      if ( v114 == v112 ) /*0x13cdd00*/
      {
LABEL_191:
        v134 = 0LL; /*0x13cde60*/
        v135 = 0LL; /*0x13cde64*/
      }
      else
      {
        v174 = v99; /*0x13cdd04*/
        v176 = v91; /*0x13cdd04*/
        v119 = 0LL; /*0x13cdd08*/
        for ( k = 0LL; ; ++k ) /*0x13cdd0c*/
        {
          v196 = "voice"; /*0x13cdd40*/
          v197 = 5LL; /*0x13cdd40*/
          LODWORD(a1: v198) = 1048581; /*0x13cdd48*/
          if ( k >= *(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdd60*/
                        a1: (v110 + 24 * i),
                        a2: &v196)
                    + 2) )
            break; /*0x13cdd60*/
          v121 = *v63; /*0x13cdd64*/
          LODWORD(a1: v198) = 1048581; /*0x13cdd70*/
          v196 = "voice"; /*0x13cdd80*/
          v197 = 5LL; /*0x13cdd80*/
          v122 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdd8c*/
                   a1: (v121 + 24 * i),
                   a2: &v196);
          v123 = v187; /*0x13cdd94*/
          v124 = *(*v122 + v119); /*0x13cdd98*/
          if ( v187 < v188 ) /*0x13cdda0*/
          {
            *v187 = v124; /*0x13cdd14*/
            v187 = v123 + 4; /*0x13cdd1c*/
          }
          else
          {
            v125 = v186; /*0x13cdda4*/
            v126 = v187 - v186; /*0x13cdda8*/
            v127 = (v187 - v186) >> 2; /*0x13cddac*/
            v128 = v127 + 1; /*0x13cddb0*/
            if ( (v127 + 1) >> 62 ) /*0x13cddb4*/
              std::__vector_base_common<true>::__throw_length_error(); /*0x13ce268*/
            v129 = v188 - v186; /*0x13cddbc*/
            if ( (v188 - v186) >> 1 >= v128 ) /*0x13cddc8*/
              v128 = v129 >> 1; /*0x13cddc8*/
            if ( (v129 >> 2) >= 0x1FFFFFFFFFFFFFFFLL ) /*0x13cddd8*/
              v130 = 0x3FFFFFFFFFFFFFFFLL; /*0x13cddd8*/
            else
              v130 = v128; /*0x13cddd8*/
            if ( v130 ) /*0x13cdddc*/
            {
              if ( v130 >> 62 ) /*0x13cdde0*/
                sub_D7B0BC(a1: "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"); /*0x13ce274*/
              v131 = operator new(a1: 4 * v130); /*0x13cddf0*/
            }
            else
            {
              v131 = 0LL; /*0x13cddf8*/
            }
            v132 = &v131[4 * v127]; /*0x13cddfc*/
            *v132 = v124; /*0x13cde08*/
            v133 = v132 + 4; /*0x13cde08*/
            if ( v126 >= 1 ) /*0x13cde0c*/
            {
              memcpy(dest: v131, src: v125, n: v126); /*0x13cde1c*/
              v125 = v186; /*0x13cde20*/
            }
            v186 = v131; /*0x13cde24*/
            v187 = v133; /*0x13cde24*/
            v63 = a1; /*0x13cde28*/
            v188 = &v131[4 * v130]; /*0x13cde34*/
            if ( v125 ) /*0x13cde38*/
              operator delete(a1: v125); /*0x13cde40*/
          }
          v110 = *v63; /*0x13cdd24*/
          v119 += 24LL; /*0x13cdd2c*/
        }
        v134 = v186; /*0x13cde48*/
        v135 = v187; /*0x13cde48*/
        v99 = v174; /*0x13cde4c*/
        v91 = v176; /*0x13cde4c*/
      }
      v136 = v135 - v134; /*0x13cde68*/
      v183 = 0LL; /*0x13cde6c*/
      v184 = 0LL; /*0x13cde6c*/
      v185 = 0LL; /*0x13cde70*/
      if ( v135 != v134 ) /*0x13cde74*/
      {
        v137 = v136 >> 2; /*0x13cde78*/
        if ( (v136 >> 2) >> 62 ) /*0x13cde7c*/
          std::__vector_base_common<true>::__throw_length_error(); /*0x13ce284*/
        v138 = operator new(a1: v136); /*0x13cde84*/
        v139 = v135 - v134; /*0x13cde88*/
        v140 = v138; /*0x13cde8c*/
        v183 = v138; /*0x13cde98*/
        v184 = v138; /*0x13cde98*/
        v185 = &v138[4 * v137]; /*0x13cde9c*/
        if ( v139 >= 1 ) /*0x13cdea0*/
        {
          memcpy(dest: v138, src: v134, n: v139); /*0x13cdeb0*/
          v140 += v139; /*0x13cdeb4*/
        }
        v63 = a1; /*0x13cdeb8*/
        v184 = v140; /*0x13cdebc*/
      }
      Character::setSupportedVoices(a1: v177, a2: &v183); /*0x13cdec8*/
      if ( v183 ) /*0x13cded0*/
      {
        v184 = v183; /*0x13cded4*/
        operator delete(a1: v183); /*0x13cded8*/
      }
      v141 = *v63; /*0x13cdedc*/
      LODWORD(a1: v198) = 1048581; /*0x13cdee8*/
      v196 = "skill_id"; /*0x13cdef8*/
      v197 = 8LL; /*0x13cdef8*/
      v142 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdf04*/
               a1: (v141 + 24 * i),
               a2: &v196);
      v143 = *(v142 + 18); /*0x13cdf0c*/
      v144 = v142; /*0x13cdf10*/
      v145 = *v142; /*0x13cdf14*/
      v146 = *v63 + 24 * i; /*0x13cdf1c*/
      v147 = *v146; /*0x13cdf20*/
      v148 = *(v146 + 8); /*0x13cdf24*/
      if ( (v143 & 0x40) != 0 ) /*0x13cdf34*/
        v149 = v144; /*0x13cdf34*/
      else
        v149 = v145; /*0x13cdf34*/
      v150 = v147 + 48 * v148; /*0x13cdf40*/
      if ( !v148 ) /*0x13cdf48*/
      {
        if ( v150 != v147 ) /*0x13ce010*/
          goto LABEL_214; /*0x13ce010*/
LABEL_217:
        v156 = &byte_897EC7; /*0x13ce014*/
        goto LABEL_218; /*0x13ce014*/
      }
      v151 = 48 * v148; /*0x13cdf60*/
      while ( 1 )
      {
        v152 = *(v147 + 16); /*0x13cdf80*/
        v153 = 15 - *(v147 + 15); /*0x13cdf8c*/
        if ( (v152 & 0x400000) == 0 ) /*0x13cdf94*/
          v153 = *(v147 + 8); /*0x13cdf94*/
        if ( v153 == 14 )
        {
          v154 = (v152 & 0x400000) != 0 ? v147 : *v147;
          if ( v154 == "skill_id_uncap" || !(*v154 ^ 'di_lliks' | *(v154 + 6) ^ 'pacnu_di') ) /*0x13cdfc8*/
            break; /*0x13cdfc8*/
        }
        v151 -= 48LL; /*0x13cdf70*/
        v147 += 48LL; /*0x13cdf74*/
        if ( !v151 ) /*0x13cdf78*/
          goto LABEL_217; /*0x13cdf78*/
      }
      if ( v150 == v147 ) /*0x13cdfd4*/
        goto LABEL_217; /*0x13cdfd4*/
LABEL_214:
      LODWORD(a1: v198) = 1048581; /*0x13cdfd8*/
      v196 = "skill_id_uncap"; /*0x13cdfe0*/
      v197 = 14LL; /*0x13cdfe0*/
      v155 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>( /*0x13cdfec*/
               a1: v146,
               a2: &v196);
      v156 = v155; /*0x13cdff4*/
      if ( (*(v155 + 18) & 0x40) == 0 ) /*0x13cdff8*/
        v156 = *v155; /*0x13cdffc*/
LABEL_218:
      if ( v99 || !v91 ) /*0x13ce01c*/
        goto LABEL_236; /*0x13ce024*/
      v157 = strlen(s: v156); /*0x13ce02c*/
      if ( v157 >= 0xFFFFFFFFFFFFFFF0LL ) /*0x13ce034*/
        std::__basic_string_common<true>::__throw_length_error(); /*0x13ce28c*/
      v158 = v157; /*0x13ce038*/
      if ( v157 >= 0x17 ) /*0x13ce040*/
      {
        v160 = (v157 + 16) & 0xFFFFFFFFFFFFFFF0LL; /*0x13ce06c*/
        v159 = operator new(a1: v160); /*0x13ce07c*/
        v197 = v158; /*0x13ce080*/
        v198 = v159; /*0x13ce080*/
        v196 = (v160 | 1); /*0x13ce084*/
LABEL_225:
        memcpy(dest: v159, src: v156, n: v158); /*0x13ce088*/
        goto LABEL_226; /*0x13ce094*/
      }
      v159 = &v196 + 1; /*0x13ce044*/
      LOBYTE(a1: v196) = 2 * v157; /*0x13ce04c*/
      if ( v157 ) /*0x13ce050*/
        goto LABEL_225; /*0x13ce050*/
LABEL_226:
      v159[v158] = 0; /*0x13ce098*/
      v161 = v196 >> 1; /*0x13ce0a8*/
      if ( (v196 & 1) != 0 ) /*0x13ce0ac*/
        v161 = v197; /*0x13ce0ac*/
      if ( v161 ) /*0x13ce0b0*/
      {
        v162 = 1; /*0x13ce0b4*/
        if ( (v196 & 1) != 0 ) /*0x13ce0bc*/
          goto LABEL_230; /*0x13ce0bc*/
      }
      else
      {
        v162 = std::string::compare(a1: &v196, a2: 0LL, a3: 0xFFFFFFFFFFFFFFFFLL, s2: &byte_897EC7, a5: 0LL) != 0; /*0x13ce1a8*/
        if ( (v196 & 1) != 0 ) /*0x13ce1b4*/
LABEL_230:
          operator delete(a1: v198); /*0x13ce0c0*/
      }
      if ( v162 ) /*0x13ce0c8*/
      {
        v163 = strlen(s: v156); /*0x13ce0d0*/
        if ( v163 >= 0xFFFFFFFFFFFFFFF0LL ) /*0x13ce0d8*/
          std::__basic_string_common<true>::__throw_length_error(); /*0x13ce294*/
        v1 = a1; /*0x13ce0dc*/
        v164 = v163; /*0x13ce0e0*/
        if ( v163 >= 0x17 ) /*0x13ce0e8*/
        {
          v171 = (v163 + 16) & 0xFFFFFFFFFFFFFFF0LL; /*0x13ce1c0*/
          v165 = operator new(a1: v171); /*0x13ce1d0*/
          v181[1] = v164; /*0x13ce1d4*/
          v182 = v165; /*0x13ce1d4*/
          v181[0] = v171 | 1; /*0x13ce1d8*/
        }
        else
        {
          v165 = v181 + 1; /*0x13ce0ec*/
          LOBYTE(a1: v181[0]) = 2 * v163; /*0x13ce0f4*/
          if ( !v163 ) /*0x13ce0f8*/
          {
LABEL_248:
            v165[v164] = 0; /*0x13ce1ec*/
            Character::setupSkill(result: v177, a2: v181); /*0x13ce1f8*/
            if ( (v181[0] & 1) != 0 ) /*0x13ce200*/
            {
              v170 = v182; /*0x13ce204*/
LABEL_250:
              operator delete(a1: v170); /*0x13ce208*/
            }
            goto LABEL_251; /*0x13ce208*/
          }
        }
        memcpy(dest: v165, src: v156, n: v164); /*0x13ce1e8*/
        goto LABEL_248; /*0x13ce1e8*/
      }
LABEL_236:
      v166 = strlen(s: v149); /*0x13ce100*/
      if ( v166 >= 0xFFFFFFFFFFFFFFF0LL ) /*0x13ce10c*/
        std::__basic_string_common<true>::__throw_length_error(); /*0x13ce27c*/
      v1 = a1; /*0x13ce110*/
      v167 = v166; /*0x13ce114*/
      if ( v166 >= 0x17 ) /*0x13ce11c*/
      {
        v169 = (v166 + 16) & 0xFFFFFFFFFFFFFFF0LL; /*0x13ce138*/
        v168 = operator new(a1: v169); /*0x13ce148*/
        v179[1] = v167; /*0x13ce14c*/
        v180 = v168; /*0x13ce14c*/
        v179[0] = v169 | 1; /*0x13ce150*/
LABEL_241:
        memcpy(dest: v168, src: v149, n: v167); /*0x13ce154*/
        goto LABEL_242; /*0x13ce160*/
      }
      v168 = v179 + 1; /*0x13ce120*/
      LOBYTE(a1: v179[0]) = 2 * v166; /*0x13ce128*/
      if ( v166 ) /*0x13ce12c*/
        goto LABEL_241; /*0x13ce12c*/
LABEL_242:
      v168[v167] = 0; /*0x13ce164*/
      Character::setupSkill(result: v177, a2: v179); /*0x13ce170*/
      if ( (v179[0] & 1) != 0 ) /*0x13ce178*/
      {
        v170 = v180; /*0x13ce17c*/
        goto LABEL_250; /*0x13ce180*/
      }
LABEL_251:
      if ( v186 ) /*0x13ce210*/
      {
        v187 = v186; /*0x13ce214*/
        operator delete(a1: v186); /*0x13ce218*/
      }
      std::__tree<std::__value_type<int,int>,std::__map_value_compare<int,std::__value_type<int,int>,std::less<int>,true>,std::allocator<std::__value_type<int,int>>>::destroy( /*0x13cd1ac*/
        a1: &v193,
        a2: v194);
    }
  }
}
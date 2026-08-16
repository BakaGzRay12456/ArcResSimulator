__int64 __fastcall Character::init(Character *this, std::__ndk1 *a2, char *a3)
{
  unsigned int v4; // w20
  _QWORD *v5; // x0
  __int128 v6; // q0
  _QWORD *v7; // x0
  char *v8; // x2
  __int64 v9; // x24
  __int64 v10; // x9
  char v11; // w25
  char v12; // w22
  __int64 v13; // x9
  _QWORD *v14; // x0
  __int128 v15; // q0
  _QWORD *v16; // x0
  char *v17; // x2
  __int64 v18; // x24
  __int64 v19; // x9
  char v20; // w25
  char v21; // w22
  __int64 v22; // x9
  _QWORD *v23; // x0
  __int128 v24; // q0
  _QWORD *v25; // x0
  char *v26; // x2
  __int64 v27; // x25
  __int64 v28; // x9
  char v29; // w26
  char v30; // w24
  __int64 v31; // x9
  _QWORD *v32; // x0
  __int128 v33; // q0
  _QWORD *v34; // x0
  __int64 v35; // x25
  __int64 v36; // x9
  char v37; // w26
  char v38; // w24
  __int64 v39; // x9
  __int64 result; // x0
  _BYTE *v41; // x9
  int v42; // w8
  CharacterAbility *v43; // x20
  unsigned __int64 v44[2]; // [xsp+8h] [xbp-48h] BYREF
  void *v45; // [xsp+18h] [xbp-38h]
  __int128 v46; // [xsp+20h] [xbp-30h] BYREF
  void *v47; // [xsp+30h] [xbp-20h]
  _BYTE v48[14]; // [xsp+38h] [xbp-18h]
  __int64 v49; // [xsp+48h] [xbp-8h]

  v4 = a2; /*0xeee648*/
  v49 = *(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40); /*0xeee64c*/
  *(this + 3) = a2; /*0xeee650*/
  std::to_string(this: a2, a2: a3, a3: v44); /*0xeee65c*/
  v5 = std::string::insert(a1: v44, a2: 0LL, s: "char/"); /*0xeee670*/
  v6 = *v5; /*0xeee678*/
  v47 = v5[2]; /*0xeee67c*/
  v46 = v6; /*0xeee680*/
  v5[1] = 0LL; /*0xeee684*/
  v5[2] = 0LL; /*0xeee684*/
  *v5 = 0LL; /*0xeee688*/
  v7 = std::string::append(a1: &v46, s: ".png"); /*0xeee698*/
  v9 = v7[2]; /*0xeee69c*/
  v10 = *(v7 + 2); /*0xeee6a0*/
  v11 = *v7; /*0xeee6a4*/
  v12 = *(v7 + 1); /*0xeee6a8*/
  *&v48[6] = v7[1]; /*0xeee6ac*/
  *v48 = v10; /*0xeee6b0*/
  *v7 = 0LL; /*0xeee6b4*/
  v7[1] = 0LL; /*0xeee6b4*/
  v7[2] = 0LL; /*0xeee6b8*/
  if ( (*(this + 16) & 1) != 0 ) /*0xeee6c4*/
    operator delete(a1: *(this + 4)); /*0xeee6cc*/
  *(this + 16) = v11; /*0xeee6d0*/
  *(this + 17) = v12; /*0xeee6d4*/
  v13 = *v48; /*0xeee6dc*/
  *(this + 3) = *&v48[6]; /*0xeee6e0*/
  *(this + 4) = v9; /*0xeee6e0*/
  *(this + 18) = v13; /*0xeee6e4*/
  if ( (v46 & 1) != 0 ) /*0xeee6ec*/
    operator delete(a1: v47); /*0xeee6f4*/
  if ( (v44[0] & 1) != 0 ) /*0xeee6fc*/
    operator delete(a1: v45); /*0xeee704*/
  std::to_string(this: v4, a2: v8, a3: v44); /*0xeee710*/
  v14 = std::string::insert(a1: v44, a2: 0LL, s: "char/"); /*0xeee724*/
  v15 = *v14; /*0xeee72c*/
  v47 = v14[2]; /*0xeee730*/
  v46 = v15; /*0xeee734*/
  v14[1] = 0LL; /*0xeee738*/
  v14[2] = 0LL; /*0xeee738*/
  *v14 = 0LL; /*0xeee73c*/
  v16 = std::string::append(a1: &v46, s: "u.png"); /*0xeee74c*/
  v18 = v16[2]; /*0xeee750*/
  v19 = *(v16 + 2); /*0xeee754*/
  v20 = *v16; /*0xeee758*/
  v21 = *(v16 + 1); /*0xeee75c*/
  *&v48[6] = v16[1]; /*0xeee760*/
  *v48 = v19; /*0xeee764*/
  *v16 = 0LL; /*0xeee768*/
  v16[1] = 0LL; /*0xeee768*/
  v16[2] = 0LL; /*0xeee76c*/
  if ( (*(this + 64) & 1) != 0 ) /*0xeee774*/
    operator delete(a1: *(this + 10)); /*0xeee77c*/
  *(this + 64) = v20; /*0xeee780*/
  *(this + 65) = v21; /*0xeee784*/
  v22 = *v48; /*0xeee78c*/
  *(this + 9) = *&v48[6]; /*0xeee790*/
  *(this + 10) = v18; /*0xeee790*/
  *(this + 66) = v22; /*0xeee794*/
  if ( (v46 & 1) != 0 ) /*0xeee79c*/
    operator delete(a1: v47); /*0xeee7a4*/
  if ( (v44[0] & 1) != 0 ) /*0xeee7ac*/
    operator delete(a1: v45); /*0xeee7b4*/
  std::to_string(this: v4, a2: v17, a3: v44); /*0xeee7c0*/
  v23 = std::string::insert(a1: v44, a2: 0LL, s: "char/"); /*0xeee7d4*/
  v24 = *v23; /*0xeee7dc*/
  v47 = v23[2]; /*0xeee7e0*/
  v46 = v24; /*0xeee7e4*/
  v23[1] = 0LL; /*0xeee7e8*/
  v23[2] = 0LL; /*0xeee7e8*/
  *v23 = 0LL; /*0xeee7ec*/
  v25 = std::string::append(a1: &v46, s: "_icon.png"); /*0xeee7fc*/
  v27 = v25[2]; /*0xeee800*/
  v28 = *(v25 + 2); /*0xeee804*/
  v29 = *v25; /*0xeee808*/
  v30 = *(v25 + 1); /*0xeee80c*/
  *&v48[6] = v25[1]; /*0xeee810*/
  *v48 = v28; /*0xeee814*/
  *v25 = 0LL; /*0xeee818*/
  v25[1] = 0LL; /*0xeee818*/
  v25[2] = 0LL; /*0xeee81c*/
  if ( (*(this + 40) & 1) != 0 ) /*0xeee828*/
    operator delete(a1: *(this + 7)); /*0xeee830*/
  *(this + 40) = v29; /*0xeee834*/
  *(this + 41) = v30; /*0xeee838*/
  v31 = *v48; /*0xeee840*/
  *(this + 6) = *&v48[6]; /*0xeee844*/
  *(this + 7) = v27; /*0xeee844*/
  *(this + 42) = v31; /*0xeee848*/
  if ( (v46 & 1) != 0 ) /*0xeee850*/
    operator delete(a1: v47); /*0xeee858*/
  if ( (v44[0] & 1) != 0 ) /*0xeee860*/
    operator delete(a1: v45); /*0xeee868*/
  std::to_string(this: v4, a2: v26, a3: v44); /*0xeee874*/
  v32 = std::string::insert(a1: v44, a2: 0LL, s: "char/"); /*0xeee888*/
  v33 = *v32; /*0xeee890*/
  v47 = v32[2]; /*0xeee894*/
  v46 = v33; /*0xeee898*/
  v32[1] = 0LL; /*0xeee89c*/
  v32[2] = 0LL; /*0xeee89c*/
  *v32 = 0LL; /*0xeee8a0*/
  v34 = std::string::append(a1: &v46, s: "u_icon.png"); /*0xeee8b0*/
  v35 = v34[2]; /*0xeee8b4*/
  v36 = *(v34 + 2); /*0xeee8b8*/
  v37 = *v34; /*0xeee8bc*/
  v38 = *(v34 + 1); /*0xeee8c0*/
  *&v48[6] = v34[1]; /*0xeee8c4*/
  *v48 = v36; /*0xeee8c8*/
  *v34 = 0LL; /*0xeee8cc*/
  v34[1] = 0LL; /*0xeee8cc*/
  v34[2] = 0LL; /*0xeee8d0*/
  if ( (*(this + 88) & 1) != 0 ) /*0xeee8d8*/
    operator delete(a1: *(this + 13)); /*0xeee8e0*/
  *(this + 88) = v37; /*0xeee8e4*/
  *(this + 89) = v38; /*0xeee8e8*/
  v39 = *v48; /*0xeee8f0*/
  *(this + 12) = *&v48[6]; /*0xeee8f4*/
  *(this + 13) = v35; /*0xeee8f4*/
  *(this + 90) = v39; /*0xeee8f8*/
  if ( (v46 & 1) != 0 ) /*0xeee900*/
    operator delete(a1: v47); /*0xeee908*/
  if ( (v44[0] & 1) != 0 ) /*0xeee910*/
    operator delete(a1: v45); /*0xeee918*/
  result = 0LL; /*0xeee924*/
  *(this + 192) = 0; /*0xeee92c*/
  v41 = this + 192; /*0xeee92c*/
  v42 = 0; /*0xeee948*/
  switch ( v4 ) /*0xeee94c*/
  {
    case 4294967295u: /*0xeee94c*/
      std::string::assign(a1: this + 2, s: "img/empty.png"); /*0xeee9b0*/
      std::string::assign(a1: this + 5, s: "char/unknown_icon.png"); /*0xeee9c0*/
      goto LABEL_35; /*0xeee9c4*/
    case 0u: /*0xeee94c*/
      v43 = operator new(a1: 0x80uLL); /*0xeee9d0*/
      *v43 = 0u; /*0xeee9d8*/
      *(v43 + 1) = 0u; /*0xeee9d8*/
      *(v43 + 2) = 0u; /*0xeee9dc*/
      *(v43 + 3) = 0u; /*0xeee9dc*/
      *(v43 + 4) = 0u; /*0xeee9e0*/
      *(v43 + 5) = 0u; /*0xeee9e0*/
      *(v43 + 6) = 0u; /*0xeee9e4*/
      *(v43 + 7) = 0u; /*0xeee9e4*/
      CharacterAbility::CharacterAbility(this: v43); /*0xeee9e8*/
      if ( ((*(*v43 + 16LL))(a1: v43, a2: 0LL, a3: 1LL, a4: 0LL, a5: 0LL, a6: 0LL, a7: 0LL, a8: 0.0) & 1) != 0 ) /*0xeeea18*/
      {
        cocos2d::Ref::autorelease(this: v43); /*0xeeea20*/
      }
      else
      {
        (*(*v43 + 8LL))(a1: v43); /*0xeeea34*/
        v43 = 0LL; /*0xeeea38*/
      }
      *(this + 19) = v43; /*0xeeea40*/
      cocos2d::Ref::retain(this: v43); /*0xeeea44*/
LABEL_35:
      v42 = 0; /*0xeeea48*/
      goto LABEL_28; /*0xeeea4c*/
    case 1u: /*0xeee94c*/
      goto LABEL_28;
    case 2u: /*0xeee94c*/
    case 3u: /*0xeee94c*/
    case 4u: /*0xeee94c*/
      v42 = 2; /*0xeee99c*/
      goto LABEL_28; /*0xeee9a0*/
    case 5u: /*0xeee94c*/
    case 8u: /*0xeee94c*/
    case 10u: /*0xeee94c*/
    case 16u: /*0xeee94c*/
    case 17u: /*0xeee94c*/
    case 19u: /*0xeee94c*/
    case 20u: /*0xeee94c*/
    case 31u: /*0xeee94c*/
    case 32u: /*0xeee94c*/
    case 33u: /*0xeee94c*/
    case 34u: /*0xeee94c*/
    case 36u: /*0xeee94c*/
    case 37u: /*0xeee94c*/
    case 38u: /*0xeee94c*/
    case 44u: /*0xeee94c*/
    case 47u: /*0xeee94c*/
    case 50u: /*0xeee94c*/
    case 51u: /*0xeee94c*/
    case 52u: /*0xeee94c*/
      v42 = 1; /*0xeee960*/
      *v41 = 1; /*0xeee964*/
      goto LABEL_28; /*0xeee964*/
    case 6u: /*0xeee94c*/
    case 7u: /*0xeee94c*/
    case 9u: /*0xeee94c*/
    case 11u: /*0xeee94c*/
    case 12u: /*0xeee94c*/
    case 13u: /*0xeee94c*/
    case 14u: /*0xeee94c*/
    case 15u: /*0xeee94c*/
    case 18u: /*0xeee94c*/
    case 21u: /*0xeee94c*/
    case 22u: /*0xeee94c*/
    case 23u: /*0xeee94c*/
    case 24u: /*0xeee94c*/
    case 25u: /*0xeee94c*/
    case 26u: /*0xeee94c*/
    case 27u: /*0xeee94c*/
    case 28u: /*0xeee94c*/
    case 29u: /*0xeee94c*/
    case 30u: /*0xeee94c*/
    case 35u: /*0xeee94c*/
    case 39u: /*0xeee94c*/
    case 40u: /*0xeee94c*/
    case 41u: /*0xeee94c*/
    case 42u: /*0xeee94c*/
    case 43u: /*0xeee94c*/
    case 45u: /*0xeee94c*/
    case 48u: /*0xeee94c*/
    case 49u: /*0xeee94c*/
    case 99u: /*0xeee94c*/
      *v41 = 1; /*0xeee954*/
      v42 = 2; /*0xeee958*/
LABEL_28:
      result = 1LL; /*0xeee968*/
      *(this + 28) = v42; /*0xeee96c*/
      break; /*0xeee998*/
    default:
      return result;
  }
  return result; /*0xeee998*/
}
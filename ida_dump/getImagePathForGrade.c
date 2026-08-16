__int64 __usercall GameResult::getImagePathForGrade@<X0>(__int64 result@<X0>, __int64 a2@<X8>)
{
  const char *v2; // x9
  __int64 v3; // x10
  __int64 v4; // x9
  const char *v5; // x9
  __int128 v6; // q0

  switch ( result ) /*0x14bb3a4*/
  {
    case 0: /*0x14bb3a4*/
      v2 = "img/grade_d.png"; /*0x14bb3a8*/
      goto LABEL_7; /*0x14bb3b0*/
    case 1: /*0x14bb3a4*/
      v2 = "img/grade_c.png"; /*0x14bb3bc*/
      goto LABEL_7; /*0x14bb3c4*/
    case 2: /*0x14bb3a4*/
      v2 = "img/grade_b.png"; /*0x14bb3c8*/
      goto LABEL_7; /*0x14bb3d0*/
    case 3: /*0x14bb3a4*/
      v2 = "img/grade_a.png"; /*0x14bb3d4*/
LABEL_7:
      v3 = *(v2 + 7); /*0x14bb3dc*/
      v4 = *v2; /*0x14bb3e0*/
      *a2 = 30; /*0x14bb3e8*/
      *(a2 + 8) = v3; /*0x14bb3ec*/
      *(a2 + 1) = v4; /*0x14bb3f0*/
      *(a2 + 16) = 0; /*0x14bb3f4*/
      return result; /*0x14bb3f8*/
    case 4: /*0x14bb3a4*/
      v5 = "img/grade_aa.png"; /*0x14bb3fc*/
      goto LABEL_10; /*0x14bb404*/
    case 5: /*0x14bb3a4*/
      v5 = "img/grade_ex.png"; /*0x14bb408*/
LABEL_10:
      v6 = *v5; /*0x14bb410*/
      *a2 = 32; /*0x14bb418*/
      *(a2 + 17) = 0; /*0x14bb41c*/
      *(a2 + 1) = v6; /*0x14bb420*/
      break; /*0x14bb424*/
    case 6: /*0x14bb3a4*/
      strcpy(a2, "\"img/grade_ex+.png"); /*0x14bb43c*/
      break; /*0x14bb43c*/
    default:
      *a2 = 0; /*0x14bb3b4*/
      break; /*0x14bb3b8*/
  }
  return result; /*0x14bb3b8*/
}

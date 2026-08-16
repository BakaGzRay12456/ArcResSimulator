unsigned __int64 *__usercall Character::getSpriteFilename@<X0>(
        Character *this@<X0>,
        char a2@<W1>,
        char a3@<W2>,
        unsigned __int64 *a4@<X8>)
{
  __int128 *v6; // x8
  __int128 *v7; // x9
  __int128 *v8; // x1

  if ( (a2 & 1) != 0 ) /*0xd18f6c*/
  {
    v6 = (this + 64); /*0xd18f70*/
    v7 = (this + 16); /*0xd18f74*/
    if ( (a3 & 1) != 0 ) /*0xd18f7c*/
      v8 = v6; /*0xd18f7c*/
    else
      v8 = v7; /*0xd18f7c*/
  }
  else if ( *(this + 145) && !*(this + 146) ) /*0xd18f90*/
  {
    v8 = (this + 64); /*0xd18f9c*/
  }
  else
  {
    v8 = (this + 16); /*0xd18f94*/
  }
  return std::string::basic_string(result: a4, a2: v8);
}

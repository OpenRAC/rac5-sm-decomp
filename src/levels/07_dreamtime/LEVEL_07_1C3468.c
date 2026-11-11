/* LEVEL_07:0x1C3468 -- returns 12 or 8 from two child flags of an object. */
int func_1C3468(char *object){ char *second = *(char **)(object + 0x58);
 if (*(unsigned char *)(*(char **)(object + 0x54) + 0x3C) == 0) return 12;
 return *(unsigned char *)(second + 0xAB) == 0 ? 8 : 12; }

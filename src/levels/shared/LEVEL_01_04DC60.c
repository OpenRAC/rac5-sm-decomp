/* LEVEL_01:0x04DC60 -- returns a stored count when a float field is within a threshold and a link word is empty, else zero. */
extern float fabsf(float x);
static __inline__ int NearZero(float v) { return fabsf(v) <= 0.1f; }
int func_04DC60(char *a0) { int a1; a1 = *(int *)(a0 + 0x334); if (a1 == 0) return 0; if ((unsigned char)NearZero(*(float *)(a0 + 0x340)) != 0 && *(int *)(a0 + 0x168) == 0) return a1; return 0; }

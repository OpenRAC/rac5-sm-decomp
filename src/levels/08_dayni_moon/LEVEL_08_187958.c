/* LEVEL_08:0x187958 -- placement copy of LEVEL_04_17C268.c. */
/* Installs four typed motion callbacks during initialization. Exact on the pinned route; callback argument roles were checked at dispatchers. */
extern void *memset(void *,int,unsigned int);
extern float D_3E5B88[4],D_278EA4;
typedef struct {
    float k_00;
    char pad_04[8];
    float s_0C;
    float x_10;
    float z_14;
} State;

typedef struct {
    char pad_00[0x20];
    float dx_20;
    char pad_24[4];
    float dz_28;
    char pad_2C[0x2C];
    State *state_58;
} Object;

typedef struct {
 void (*a)(char *,int);
 void (*b)(char *,char *,float *,float *,int);
 void (*c)(char *);
 void (*d)(Object *,float *);
 float x;
} Handlers;
extern Handlers D_3E5B98;
extern void func_187818(char *,int);
extern void func_187668(char *,char *,float *,float *,int);
extern void func_1872A8(char *);
extern void func_16D0D0(Object *,float *);
void func_187958(int enabled,int phase)
{
 if(phase==65535 && enabled){
  D_3E5B88[0]=0;D_3E5B88[3]=1;D_3E5B88[2]=0;D_3E5B88[1]=0;
  memset(&D_3E5B98,0,20);
  D_3E5B98.a=func_187818;D_3E5B98.b=func_187668;D_3E5B98.c=func_1872A8;D_3E5B98.d=func_16D0D0;D_3E5B98.x=D_278EA4;
 }
}

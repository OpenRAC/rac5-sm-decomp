/* Installs four typed motion callbacks during initialization. Exact on the pinned route; callback argument roles were checked at dispatchers. */
extern void *memset(void *,int,unsigned int);
extern float D_3B0640[4],D_24479C;
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
extern Handlers D_3B0650;
extern void func_17C128(char *,int);
extern void func_17BF78(char *,char *,float *,float *,int);
extern void func_17BBB8(char *);
extern void func_166340(Object *,float *);
void func_17C268(int enabled,int phase)
{
 if(phase==65535 && enabled){
  D_3B0640[0]=0;D_3B0640[3]=1;D_3B0640[2]=0;D_3B0640[1]=0;
  memset(&D_3B0650,0,20);
  D_3B0650.a=func_17C128;D_3B0650.b=func_17BF78;D_3B0650.c=func_17BBB8;D_3B0650.d=func_166340;D_3B0650.x=D_24479C;
 }
}

/* LEVEL_19:0x17C0E0 -- placement copy of LEVEL_16_17F448.c: collision probe and response that reports success through an optional flag pointer. */
struct Vec3 {float x,y,z;};
struct Vel {char pad[8];struct Vec3 v;char pad14[0xC];float f20;};
typedef struct Obj {char pad[0x30];struct Vec3 pos;char pad3C[0x1C];struct Vel *vel;} Obj;
typedef struct {float x,y,z,w;} Vec;
typedef struct {char p[12];unsigned short flags;char q[18];} Hit;
extern int func_01D7F0(float *,Vec *,Vec *,Vec *,Vec *,Hit *,float *,int,int,int,float);
extern int func_17BD18(Obj *,Vec *,float *,Hit *);
int func_17C0E0(Obj *o, int *out)
{
 Hit hit;Vec a,b,c,d;float *pos=(float *)&o->pos;int ok=0;
 if(func_01D7F0(pos,&a,&b,&c,&d,&hit,pos,56,0,0,0.18f)){
  if(hit.flags&8){
   ok=1;
   if(out)*out=ok;
  }else if(func_17BD18(o,&a,pos,&hit)){
   ok=1;pos[0]=a.x;pos[1]=a.y;pos[2]=a.z;
   if(out)*out=ok;
  }
 }
 return ok;
}

/* LEVEL_19:0x14D9A0 -- placement copy of LEVEL_16_150AC8.c. */
/* Collision probe and response; exact on the pinned route. Full object prefix agrees with the accepted movement caller. */
struct Vec3 {float x,y,z;};
struct Vel {char pad[8];struct Vec3 v;char pad14[0xC];float f20;};
typedef struct Obj {char pad[0x30];struct Vec3 pos;char pad3C[0x1C];struct Vel *vel;} Obj;
typedef struct {float x,y,z,w;} Vec;
typedef struct {char p[12];unsigned short flags;char q[18];} Hit;
extern int func_01D7F0(float *,Vec *,Vec *,Vec *,Vec *,Hit *,float *,int,int,int,float);
extern int func_14D4C8(Obj *,Vec *,float *,Hit *);
int func_14D9A0(Obj *o)
{
 Hit hit;Vec a,b,c,d;float *pos=(float *)&o->pos;int ok=0;
 if(func_01D7F0(pos,&a,&b,&c,&d,&hit,pos,56,0,0,0.25f)){
  if(hit.flags&8)ok=1;
  else if(func_14D4C8(o,&a,pos,&hit)){
   ok=1;pos[0]=a.x;pos[1]=a.y;pos[2]=a.z;
  }
 }
 return ok;
}

/* USA LEVEL_01.REL:0x17D280, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
/* Semantic hold: accepted callers declare the position argument as int.
 * Reconcile the positional-sound pointer contract before promotion. */
typedef struct SND_Positional SND_Positional;
typedef struct GDE_Sound GDE_Sound;
typedef struct VEC3 VEC3;
typedef struct SoundRow { float unused,gain,minimum,maximum,falloff; int tag; } SoundRow;
typedef struct SoundState { unsigned char pad[0xA4]; GDE_Sound *sounds[0]; } SoundState;
extern SoundState D_00396AC0;
extern SoundRow D_00222A20[];
extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(SND_Positional *,GDE_Sound *,SND_Positional **,const VEC3 *,unsigned char,unsigned char,float,float,float,float,float,float,unsigned char);
void func_17D280(SND_Positional *sound, int index, const VEC3 *position, SND_Positional **slot, float scale)
{
    SoundRow *row=&D_00222A20[index];
    GDE_Sound *data=D_00396AC0.sounds[index];
    if (data)
        SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(sound,data,slot,position,1,0,1.0f,0.5f,row->minimum,row->maximum,row->gain*scale,row->falloff,0);
}

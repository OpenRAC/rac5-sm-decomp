/* USA LEVEL_05.REL:0x162B58, 172-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 164 linked bytes; first differing word +0x1C.
 * Unaccepted; no matching credit. Recover the exclusion helper early-return region and boolean return layout while preserving the eight-record scan.
 */
/* Test the linked volume when the cooldown and eight exclusion slots allow it. */
typedef struct Vec3 { float x,y,z; } Vec3;
typedef struct Record { unsigned char pad[0x24]; int occupied; } Record;
extern Vec3 *func_0198F0(void);
extern int func_082088(void *, const Vec3 *);
int func_162B58(unsigned char *object, unsigned char *state, Record *records)
{
    unsigned int i;
    unsigned char *linked;
    Vec3 *position;
    void *volume;
    if (*(float *)(object+0x70)>0.0f) return 0;
    if (state[0x1d])
        for(i=0;i<8;++i) if (records[i].occupied==1) return 0;
    linked=*(unsigned char **)(state+0x14);
    volume=*(void **)state;
    position=linked?(Vec3 *)(linked+0x30):func_0198F0();
    if (volume && func_082088(volume,position)) return 1;
    return 0;
}

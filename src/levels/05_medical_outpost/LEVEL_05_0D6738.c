/* LEVEL_05:0x0D6738 -- take the vector the track points at and hand it to
   the caller; the track refuses when its counter has caught up with the
   cursor. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 slot[8];
    int count;
    int cursor;
} Track;

extern void func_0D66C0(Track *track);

int func_0D6738(Track *track, Vec3 *dst)
{
    if (track->count == track->cursor)
        return 0;
    if (!dst)
        return 0;

    *dst = track->slot[track->cursor];
    func_0D66C0(track);
    return 1;
}

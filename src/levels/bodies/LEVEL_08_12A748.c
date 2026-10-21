/* LEVEL_08:0x12A748 -- take the three values of the global and hand the
   selected one to the update routine, with the kind it was given. */
typedef struct {
    int v[3];
} Tri;

extern Tri D_261A18;
extern void func_029C80(int id, int kind, int value);

void func_12A748(int id, int kind, int index)
{
    Tri t = D_261A18;
    func_029C80(id - 1, kind, t.v[index]);
}

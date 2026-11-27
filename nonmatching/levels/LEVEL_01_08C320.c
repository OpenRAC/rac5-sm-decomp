/* USA LEVEL_01:08C320, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 252 bytes: 2 differing words; first difference +0x44. No matching credit.
 * Remaining issue: improved 6 -> 2: an inline BoneAt(sk, i) returning &sk->bones[i] gives the
 * retail bones-first addu in both parent reads; left: sched tie at entry (retail issues the
 * idx*0x30 mult before the lw of D_001F628C); computing &D_0023D830[idx] into a local first
 * fixes the order but swaps v0/v1 for the index chain (8 w); int/char address forms,
 * unsigned/one-element index global, flags: no change
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x08C320 -- builds a bone's world matrix by walking its parent chain. */
struct Bone {
    char pad[0x44];
    unsigned char parent;
    char pad45[0xB];
};
struct Skel {
    char pad[8];
    struct Bone *bones;
};
struct Mdl {
    struct Skel **set;
};
struct Inst {
    char pad[0x14];
    struct Mdl **m14;
    struct Mdl **m18;
};
struct M30 {
    char b[0x30];
};
extern struct M30 D_0023D830[];
extern int D_001F628C;
extern void func_08C270(void *dst, void *src);
extern void func_1257D0(void *dst, void *a, void *b);

static __inline__ struct Bone *BoneAt(struct Skel *sk, unsigned int i)
{
    return &sk->bones[i];
}

void func_08C320(struct Inst *inst, void *out, int idx)
{
    struct Skel *sk;
    struct Mdl **mm;
    unsigned parent;
    float tmp[16];

    mm = inst->m18;
    if (mm == 0) {
        mm = inst->m14;
    }
    sk = ((struct Skel **)*mm)[D_001F628C];
    func_08C270(out, &D_0023D830[idx]);
    parent = BoneAt(sk, idx)->parent;
    while (parent != 0xFF) {
        func_08C270(tmp, &D_0023D830[parent]);
        func_1257D0(out, out, tmp);
        parent = BoneAt(sk, parent)->parent;
    }
}

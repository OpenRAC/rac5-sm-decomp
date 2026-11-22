/* boot:0x01ECDA38 -- frees a malloc chunk (Doug Lea malloc 2.6.4 as in newlib): coalesces with neighbours, relinks into the bins and trims the top. Ported from OpenRAC/rac4-decomp src/core/001256C8.c (_free_r). */
/* Algorithm reference: Doug Lea malloc 2.6.4, newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * A version of malloc/free/realloc written by Doug Lea and released to the public domain.
 * Matching reconstruction, not an unchanged vendor file. */
typedef unsigned int u32;
typedef unsigned long u64;
typedef int s32;

typedef struct mc {
    u32 prev_size;
    u32 size;
    struct mc *fd;
    struct mc *bk;
} *mchunkptr;

extern void __malloc_lock(void);
extern void __malloc_unlock(s32);
extern void _malloc_trim_r(s32, u32);
extern mchunkptr __malloc_av_[];
extern u64 __malloc_trim_threshold[];
extern u32 __malloc_top_pad[];
#define av_ __malloc_av_
#define bin_at(i) ((mchunkptr)((char *)&av_[2 * (i) + 2] - 8))
#define top (bin_at(0)->fd)
#define last_remainder (bin_at(1))
#define binblocks (bin_at(0)->size)
#define chunksize(p) ((p)->size & ~3)
#define chunk_at_offset(p, s) ((mchunkptr)((char *)(p) + (s)))
#define inuse_bit_at_offset(p, s) (((mchunkptr)((char *)(p) + (s)))->size & 1)
#define set_head(p, s) ((p)->size = (s))
#define set_foot(p, s) (((mchunkptr)((char *)(p) + (s)))->prev_size = (s))
#define unlink(P, BK, FD) \
    { \
        BK = P->bk; \
        FD = P->fd; \
        FD->bk = BK; \
        BK->fd = FD; \
    }
#define smallbin_index(sz) (((u32)(sz)) >> 3)
#define bin_index(sz) \
    (((((u32)(sz)) >> 9) == 0) ? (((u32)(sz)) >> 3) : \
     ((((u32)(sz)) >> 9) <= 4) ? 56 + (((u32)(sz)) >> 6) : \
     ((((u32)(sz)) >> 9) <= 20) ? 91 + (((u32)(sz)) >> 9) : \
     ((((u32)(sz)) >> 9) <= 84) ? 110 + (((u32)(sz)) >> 12) : \
     ((((u32)(sz)) >> 9) <= 340) ? 119 + (((u32)(sz)) >> 15) : \
     ((((u32)(sz)) >> 9) <= 1364) ? 124 + (((u32)(sz)) >> 18) : 126)
#define idx2binblock(ii) ((long)1 << ((ii) / 4))
#define mark_binblock(ii) (binblocks |= idx2binblock(ii))
#define frontlink(P, S, IDX, BK, FD) \
    { \
        if (S < 512) { \
            IDX = smallbin_index(S); \
            mark_binblock(IDX); \
            BK = bin_at(IDX); \
            FD = BK->fd; \
            P->bk = BK; \
            P->fd = FD; \
            FD->bk = BK->fd = P; \
        } else { \
            IDX = bin_index(S); \
            BK = bin_at(IDX); \
            FD = BK->fd; \
            if (FD == BK) { \
                mark_binblock(IDX); \
            } else { \
                while (FD != BK && S < chunksize(FD)) { \
                    FD = FD->fd; \
                } \
                BK = FD->bk; \
            } \
            P->bk = BK; \
            P->fd = FD; \
            FD->bk = BK->fd = P; \
        } \
    }

void _free_r(s32 reent_ptr, void *mem) {
    mchunkptr p;
    u32 hd;
    u32 sz;
    s32 idx;
    mchunkptr next;
    u32 nextsz;
    u32 prevsz;
    mchunkptr bck;
    mchunkptr fwd;
    s32 islr;

    if (mem == 0) {
        return;
    }
    __malloc_lock();
    p = (mchunkptr)((char *)mem - 8);
    hd = p->size;
    sz = hd & ~1;
    next = chunk_at_offset(p, sz);
    nextsz = chunksize(next);
    if (next == top) {
        sz += nextsz;
        if (!(hd & 1)) {
            prevsz = p->prev_size;
            p = chunk_at_offset(p, -((long)prevsz));
            sz += prevsz;
            unlink(p, bck, fwd);
        }
        set_head(p, sz | 1);
        top = p;
        if ((u64)sz >= __malloc_trim_threshold[0]) {
            _malloc_trim_r(reent_ptr, __malloc_top_pad[0]);
        }
        __malloc_unlock(reent_ptr);
        return;
    }
    set_head(next, nextsz);
    islr = 0;
    if (!(hd & 1)) {
        prevsz = p->prev_size;
        p = chunk_at_offset(p, -((long)prevsz));
        sz += prevsz;
        if (p->fd == last_remainder) {
            islr = 1;
        } else {
            unlink(p, bck, fwd);
        }
    }
    if (!(inuse_bit_at_offset(next, nextsz))) {
        sz += nextsz;
        if (!islr && next->fd == last_remainder) {
            islr = 1;
            last_remainder->fd = last_remainder->bk = p;
            p->fd = p->bk = last_remainder;
        } else {
            unlink(next, bck, fwd);
        }
    }
    set_head(p, sz | 1);
    set_foot(p, sz);
    if (!islr) {
        frontlink(p, sz, idx, bck, fwd);
    }
    __malloc_unlock(reent_ptr);
}

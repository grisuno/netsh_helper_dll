# Concepts

Second-brain semantic layer: nouns map atomically to file sets (EXTRACTED); verbs aggregate structural edges (INFERRED).

| Concept | Files | Mentions | Top Files |
|---------|-------|----------|-----------|
| `helper` | 2 | 5 | `app.py`, `main.c` |
| `dll` | 2 | 4 | `app.py`, `main.c` |
| `netsh` | 2 | 4 | `app.py`, `main.c` |
| `code` | 2 | 2 | `app.py`, `main.c` |

## Dialectic Prompts

- Thesis: `code` centralizes 2 files; Antithesis: `dll` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `code` centralizes 2 files; Antithesis: `helper` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `code` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `dll` centralizes 2 files; Antithesis: `helper` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `dll` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `helper` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?

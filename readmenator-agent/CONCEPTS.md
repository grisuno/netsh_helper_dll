# Concepts

Nouns map atomically to file sets (EXTRACTED); verbs aggregate structural edges (INFERRED).

- `helper` | files=2 | mentions=5 | `app.py`, `main.c`
- `dll` | files=2 | mentions=4 | `app.py`, `main.c`
- `netsh` | files=2 | mentions=4 | `app.py`, `main.c`
- `code` | files=2 | mentions=2 | `app.py`, `main.c`

## Dialectic

- Thesis: `code` centralizes 2 files; Antithesis: `dll` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `code` centralizes 2 files; Antithesis: `helper` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `code` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `dll` centralizes 2 files; Antithesis: `helper` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `dll` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?
- Thesis: `helper` centralizes 2 files; Antithesis: `netsh` pulls 2 files with 2 shared (Jaccard 1.00); Synthesis: should they merge, split by layer, or keep `bridges` explicit?

# meridian-chain-mempool-lab

`meridian-chain-mempool-lab` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for mempool storage recovery, using log and snapshot fixtures and replay consistency checks.

## Why This Exists

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Meridian Chain Mempool Lab Review Notes

For a quick review, compare `proof depth` with `nonce pressure` before reading the middle cases.

## Capabilities

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/meridian-chain-mempool-walkthrough.md` walks through the case spread.
- The C code includes a review path for `proof depth` and `nonce pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C code keeps the review rule close to the tests.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

The check exercises the source code and the review fixture. `recovery` is the high score at 189; `stress` is the low score at 95.

## Roadmap

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.

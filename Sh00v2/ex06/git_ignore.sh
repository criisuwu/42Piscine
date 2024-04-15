#!/bin/bash

git ls-files --others --ignored --exclude-standard | tr '\n' '\0' | xargs -0 -I {} echo {}

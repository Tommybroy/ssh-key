#!/bin/bash
cd /home/thomi
git -C /home/thomi ls-files --others --ignored --exclude-standard | sed 's/$/$/'

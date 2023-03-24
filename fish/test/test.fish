#!/usr/bin/env fish

set DIR (dirname (status --current-filename))
source $DIR/../console.fish

console.log "fish:" 1337

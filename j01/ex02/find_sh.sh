find . -name "*.sh" -type f | xargs -n 1 basename | rev | cut -c 4- | rev


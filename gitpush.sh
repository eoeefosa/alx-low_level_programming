#!/bin/bash
# A git script that takes a commit message as an argument and runs git add, git commit and git push

# check if the argument is given
if[ -z "$1" ]; then
	echo "Please provide a commit message"
	exit 1
fi

# Assign the argument to a variable
msg ="$"

# Run the git commands with the given message 
git add .
git commit -m "$msg"
git push

# Print a success message
echo "Done!"

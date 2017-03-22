cd ~/rover_workspace
git remote add unm https://github.com/BCLab-UNM/Swarmathon-ROS.git
echo "pulling from remote repo"
git pull unm master
echo "merging" 
git merge master
sleep 2
catkin clean -y
sleep 1
catkin build


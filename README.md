# **Intel4coro Project - Giskard and PR2 Simulator**
## Start-Up

---
### _Please install docker and docker-compose to your system._

- To install docker
```
sudo apt  install docker.io
```
Check if docker is active run: `sudo systemctl status docker`. If status is not active, activate it run: `sudo systemctl enable --now docker`

- To install docker-compose
```
sudo apt install docker-compose
```
---

To install and start Giskard and PR2 Simulator follow this steps:

1. Clone this repository and go to the directory: 
```
 https://github.com/bhavyawadhwa856/intel4coro.git

 cd intel4coro/
 ```

2. Run containers 
```
sudo docker-compose up
```
## Simulate Giskard and PR2 Simulator on RVIZ
---
- In other window of terminal open rviz run: `rviz`, if it shows error rviz not found run: `sudo apt install rviz` then again run: `rviz`
- At the bottom left press ADD
- Under By display type ADD RobotModel
- Under By topic ADD InteractiveMarkers and MarkerArray
- Check whether the simulation worked or not on RobotModel 



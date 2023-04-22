# execute a command to kill a process name killmenow
exec { 'killmenow':
  path    =>  ['/usr/bin'],
  command => 'pkill -f killmenow'
}

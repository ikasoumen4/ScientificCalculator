#Cent OS 7 の違い

ifcfg-eth0
ifcfg-enp0s3

参考
http://qiita.com/sion_cojp/items/115e1671fcbc8f214aee

カーネルバージョン 2.x → 3.x

デフォルトファイルシステム
ext4 → xfs

ブートローダ
  GRUB Legacy → GRUB2
    
    BIOS, UEFIの両対応
    
    RAID, LVMのLinuxでのサポート
    
    パーティションテーブル
      GPTの正式サポート
      MBRが2Tib→8ZiBまで管理可能に
      
    ファイルシステムサポート
      HFS+,NTFS,ZFSが追加
    
    カーネルのサポートを追加
      （XNU(Mac OSXとDarwinカーネル)）
      
セキュリティ
  firewalldが追加された
  これまで同様iptablesは使えるが併用は負荷
    
サービスコマンド
  service サービス名 start →
  systemctl start unit名
  
  chkconfig script名 on/off　→
  systemctl enable/disable unit名

ネットワーク
  nmtui　GUIでネットワーク設定が可能
  nmcli　CUIでネットワーク設定
  route → nmtui
  arp → ip r
  netstat → ip n
  
  
  PTP(Precision Time Protocol)v2
    NTP より高性能らしい
    ntpd → chrony
  
  

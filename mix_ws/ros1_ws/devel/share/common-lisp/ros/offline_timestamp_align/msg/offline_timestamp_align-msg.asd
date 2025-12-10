
(cl:in-package :asdf)

(defsystem "offline_timestamp_align-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "FusedState" :depends-on ("_package_FusedState"))
    (:file "_package_FusedState" :depends-on ("_package"))
  ))